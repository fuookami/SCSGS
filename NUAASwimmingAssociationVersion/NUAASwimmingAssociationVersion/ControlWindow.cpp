#include "ControlWindow.h"
#include <ctime>

ControlWindow::ControlWindow(QMainWindow *parent /* = NULL */) :QMainWindow(parent)
{
	thisCom = new competion();
	screenWin = new ScreenWindow(Screen, thisCom->getTeamNames());
	screenWin->show();
	monitor = new ScreenWindow(Monitor, thisCom->getTeamNames());
	monitor->show();
	gameNames = thisCom->getGameNames();
	teamNames = thisCom->getTeamNames();

	ui = new Ui::ControlWindow();
	ui->setupUi(this);
	ui->RegistrationCompetitionName->setText(QString::fromLocal8Bit(QByteArray("比赛还未正式开始")));

	mediaPlayer = new QMediaPlayer();
	mediaPlayer->setMedia(QUrl(QString::fromLocal8Bit("Whistle.wav")));

	connect(ui->StartBtn, SIGNAL(clicked()), this, SLOT(startComp()));
	ui->StopBtn->setEnabled(false);
	ui->ContinueBtn->setEnabled(false);
	ui->Refresh->setEnabled(false);
	ui->Next->setEnabled(false);
	ui->LastLoad->setEnabled(false);
	ui->NextLoad->setEnabled(false);

	teamScore demo = { 0, 0 };
	for (int i(0), j(thisCom->getTeamNames().size() - 1); i < j; ++i)
	{
		demo.team = i;
		scores.push_back(demo);
	}

	currGameOr = 0;

	setMap();
}

ControlWindow::~ControlWindow(void)
{

}

void ControlWindow::startComp(void)
{
	thisGame = thisCom->getGameByOrder(currGameOr);
	thisGame.currentGroup = -1;
	currLoadGameOr = 0;
	ui->RegistrationCompetitionName->setText(QString::fromLocal8Bit(QByteArray(thisGame.gameName.c_str())) + QString::fromLocal8Bit("预决赛"));

	screenWin->setLoad(gameNames[0]);
	monitor->setLoad(gameNames[0]);

	disconnect(ui->StartBtn, SIGNAL(clicked()));
	ui->StartBtn->setEnabled(false);
	ui->Next->setEnabled(true);
	ui->Whistle->setEnabled(true);
	ui->NextLoad->setEnabled(true);

	connect(ui->Whistle, SIGNAL(clicked()), this, SLOT(playWhistle()));
	connect(ui->Next, SIGNAL(clicked()), this, SLOT(nextGroup()));
	connect(ui->StopBtn, SIGNAL(clicked()), this, SLOT(stopComp()));
	connect(ui->ContinueBtn, SIGNAL(clicked()), this, SLOT(continueComp()));
	connect(ui->Refresh, SIGNAL(clicked()), this, SLOT(refresh()));
	connect(ui->LastLoad, SIGNAL(clicked()), this, SLOT(lastLoad()));
	connect(ui->NextLoad, SIGNAL(clicked()), this, SLOT(nextLoad()));
}

void ControlWindow::playWhistle(void)
{
	mediaPlayer->play();
}

void ControlWindow::stopComp(void)
{
	ui->StopBtn->setEnabled(false);
	ui->ContinueBtn->setEnabled(true);
	screenWin->setStop();
	screenWin->setStop();
}

void ControlWindow::continueComp(void)
{
	ui->StopBtn->setEnabled(true);
	ui->ContinueBtn->setEnabled(false);
	monitor->refresh(thisGame.groups[thisGame.currentGroup]);
	monitor->setGame(thisGame.gameName + std::string("预决赛") + Setting::groupNames[thisGame.currentGroup]);
	screenWin->refresh(thisGame.groups[thisGame.currentGroup]);
	screenWin->setGame(thisGame.gameName + std::string("预决赛") + Setting::groupNames[thisGame.currentGroup]);
}

void ControlWindow::nextGroup(void)
{
	ui->StopBtn->setEnabled(true);
	if (thisGame.currentGroup != -1) {
		for (int i(0); i < Setting::LineNums; ++i)
		{
			getGrade(i);
		}
	}
	if (++thisGame.currentGroup == thisGame.groups.size())
	{
		if (++currGameOr == thisCom->getGameNum())
		{
			screenWin->setEnd();
			monitor->setEnd();
			clearWin();
			ui->CompetitionName->setText(QString::fromLocal8Bit("已完赛"));
			deal();
			outPutTeamScore();
			return;
		}
		deal();
		thisGame = thisCom->getGameByOrder(currGameOr);
		thisGame.currentGroup = 0;
	}
	refreshWin();
}

void ControlWindow::refreshWin(void)
{
	clearWin();
	monitor->refresh(thisGame.groups[thisGame.currentGroup]);
	monitor->setGame(thisGame.gameName + std::string("预决赛") + Setting::groupNames[thisGame.currentGroup]);
	screenWin->refresh(thisGame.groups[thisGame.currentGroup]);
	screenWin->setGame(thisGame.gameName + std::string("预决赛") + Setting::groupNames[thisGame.currentGroup]);
	ui->CompetitionName->setText(QString::fromLocal8Bit((thisGame.gameName + Setting::groupNames[thisGame.currentGroup]).c_str()));
	for (int i(0); i < Setting::LineNums; ++i)
	{
		setLine(i);
	}
	ui->Next->setEnabled(false);
	ui->Refresh->setEnabled(true);
}

void ControlWindow::refresh(void)
{
	for (int i(0); i < Setting::LineNums; ++i)
	{
		getGrade(i);
	}
	std::array<athlete, Setting::LineNums> temp(thisGame.groups[thisGame.currentGroup]);
	std::sort(temp.begin(), temp.end());
	for (int i(0), j(1); i < Setting::LineNums; ++i)
	{
		if (temp[i].name.empty())
		{
			continue;
		}
		if (i != 0)
		{
			j = (temp[i].grade == temp[i - 1].grade) ? j : i + 1;
		}
		std::array<athlete, Setting::LineNums>::iterator thisRank
			(std::find(thisGame.groups[thisGame.currentGroup].begin(), thisGame.groups[thisGame.currentGroup].end(), temp[i]));
		thisRank->thisRank = (thisRank->grade < 10000.0) ? j : -1;
	}
	screenWin->refresh(thisGame.groups[thisGame.currentGroup]);
	screenWin->setGame(thisGame.gameName + Setting::groupNames[thisGame.currentGroup]);
	monitor->refresh(thisGame.groups[thisGame.currentGroup]);
	monitor->setGame(thisGame.gameName + Setting::groupNames[thisGame.currentGroup]);
	ui->CompetitionName->setText(QString::fromLocal8Bit((thisGame.gameName + Setting::groupNames[thisGame.currentGroup]).c_str()));
	ui->Next->setEnabled(true);
}

void ControlWindow::lastLoad(void)
{
	if (--currLoadGameOr == 0)
	{
		ui->LastLoad->setEnabled(false);
	}
	ui->NextLoad->setEnabled(true);
	ui->RegistrationCompetitionName->setText
		(QString::fromLocal8Bit(gameNames[currLoadGameOr].c_str()));
	screenWin->setLoad(gameNames[currLoadGameOr].c_str());
	monitor->setLoad(gameNames[currLoadGameOr].c_str());
}

void ControlWindow::nextLoad(void)
{
	if (++currLoadGameOr == gameNames.size() - 1)
	{
		ui->NextLoad->setEnabled(false);
	}
	ui->LastLoad->setEnabled(true);
	ui->RegistrationCompetitionName->setText
		(QString::fromLocal8Bit(gameNames[currLoadGameOr].c_str()) + QString::fromLocal8Bit("预决赛"));
	screenWin->setLoad(gameNames[currLoadGameOr].c_str());
	monitor->setLoad(gameNames[currLoadGameOr].c_str());
}

void ControlWindow::setLine(int line)
{
	athlete &thisAth(thisGame.groups[thisGame.currentGroup][line]);
	if (thisAth.name.empty())
	{
		return;
	}
	names[line]->setText(QString::fromLocal8Bit(thisAth.name.c_str()));
	teams[line]->setText(QString::fromLocal8Bit(teamNames[thisAth.team].c_str()));
}

void ControlWindow::setMap(void)
{
	names[0] = ui->Line0Name;
	names[1] = ui->Line1Name;
	names[2] = ui->Line2Name;
	names[3] = ui->Line3Name;
	names[4] = ui->Line4Name;
	names[5] = ui->Line5Name;
	names[6] = ui->Line6Name;
	names[7] = ui->Line7Name;
	names[8] = ui->Line8Name;
	names[9] = ui->Line9Name;

	teams[0] = ui->Line0Team;
	teams[1] = ui->Line1Team;
	teams[2] = ui->Line2Team;
	teams[3] = ui->Line3Team;
	teams[4] = ui->Line4Team;
	teams[5] = ui->Line5Team;
	teams[6] = ui->Line6Team;
	teams[7] = ui->Line7Team;
	teams[8] = ui->Line8Team;
	teams[9] = ui->Line9Team;

	qs[0] = ui->Line0Q;
	qs[1] = ui->Line1Q;
	qs[2] = ui->Line2Q;
	qs[3] = ui->Line3Q;
	qs[4] = ui->Line4Q;
	qs[5] = ui->Line5Q;
	qs[6] = ui->Line6Q;
	qs[7] = ui->Line7Q;
	qs[8] = ui->Line8Q;
	qs[9] = ui->Line9Q;

	dqs[0] = ui->Line0DQ;
	dqs[1] = ui->Line1DQ;
	dqs[2] = ui->Line2DQ;
	dqs[3] = ui->Line3DQ;
	dqs[4] = ui->Line4DQ;
	dqs[5] = ui->Line5DQ;
	dqs[6] = ui->Line6DQ;
	dqs[7] = ui->Line7DQ;
	dqs[8] = ui->Line8DQ;
	dqs[9] = ui->Line9DQ;

	mins[0] = ui->Line0Min;
	mins[1] = ui->Line1Min;
	mins[2] = ui->Line2Min;
	mins[3] = ui->Line3Min;
	mins[4] = ui->Line4Min;
	mins[5] = ui->Line5Min;
	mins[6] = ui->Line6Min;
	mins[7] = ui->Line7Min;
	mins[8] = ui->Line8Min;
	mins[9] = ui->Line9Min;

	secs[0] = ui->Line0Sec;
	secs[1] = ui->Line1Sec;
	secs[2] = ui->Line2Sec;
	secs[3] = ui->Line3Sec;
	secs[4] = ui->Line4Sec;
	secs[5] = ui->Line5Sec;
	secs[6] = ui->Line6Sec;
	secs[7] = ui->Line7Sec;
	secs[8] = ui->Line8Sec;
	secs[9] = ui->Line9Sec;

	hun_msecs[0] = ui->Line0HunMSec;
	hun_msecs[1] = ui->Line1HunMSec;
	hun_msecs[2] = ui->Line2HunMSec;
	hun_msecs[3] = ui->Line3HunMSec;
	hun_msecs[4] = ui->Line4HunMSec;
	hun_msecs[5] = ui->Line5HunMSec;
	hun_msecs[6] = ui->Line6HunMSec;
	hun_msecs[7] = ui->Line7HunMSec;
	hun_msecs[8] = ui->Line8HunMSec;
	hun_msecs[9] = ui->Line9HunMSec;
}

void ControlWindow::getGrade(int line)
{
	athlete &thisAth(thisGame.groups[thisGame.currentGroup][line]);
	if (thisAth.name.empty())
	{
		return;
	}
	thisAth.hasGrade = true;
	if (qs[line]->isChecked())
	{
		thisAth.gradeStr = std::string("DSQ");
		thisAth.grade = 10000.0;
	}
	else if (dqs[line]->isChecked())
	{
		thisAth.gradeStr = std::string("DNS");
		thisAth.grade = 100000.0;
	}
	else
	{
		std::string temp(hun_msecs[line]->toPlainText().toLocal8Bit());
		if (temp.size() == 1 || temp.size() == 0)
		{
			temp.append(2 - temp.size(), '0');
		}
		else if (temp.size() > 2)
		{
			temp.erase(temp.begin() + 2, temp.end());
		}
		thisAth.grade = mins[line]->toPlainText().toDouble() * 60
			+ secs[line]->toPlainText().toDouble()
			+ std::stod(temp) / 100;
		thisAth.gradeStr.clear();
		if (mins[line]->toPlainText().toDouble() > 0.0)
		{
			thisAth.gradeStr = std::string(mins[line]->toPlainText().toLocal8Bit()) + std::string(":");
		}
		thisAth.gradeStr.append(std::string(secs[line]->toPlainText().toLocal8Bit()) + std::string(".")
			+ temp);
	}
}

void ControlWindow::clearWin(void)
{
	for (int i(0); i < Setting::LineNums; ++i)
	{
		qs[i]->setChecked(false);
		dqs[i]->setChecked(false);
		mins[i]->clear();
		secs[i]->clear();
		hun_msecs[i]->clear();
		names[i]->clear();
		teams[i]->clear();
	}
}

void ControlWindow::deal(void)
{
	time_t tt = time(NULL);
	tm* t = localtime(&tt);
	std::ostringstream timeStr;
	timeStr << t->tm_year + 1900 << '/' << t->tm_mon + 1 << '/' << t->tm_mday << ' ' << t->tm_hour << ':' << t->tm_min << ':' << t->tm_sec;
	std::ofstream fout(std::string("Result/") + thisCom->getCompName() + thisGame.gameName + std::string("决赛") + std::string("成绩公告.html"));
	fout << this->thisCom->getHead();
	fout << "<td colspan=2 class=xl75 align=right width=550 style='width:413pt'>" << timeStr.str() << "</td></tr>";

	bool isRelay = false;
	std::array<std::vector<athlete>, 3> athletes;
	for (int i(0), j(thisGame.groups.size()); i < j; ++i)
	{
		for (int p(0); p < Setting::LineNums; ++p)
		{
			if (!thisGame.groups[i][p].name.empty())
			{
				if (thisGame.groups[i][p].cla == 3)
				{
					isRelay = true;
					goto outOfCirculation;
				}
				athletes[thisGame.groups[i][p].cla].push_back(thisGame.groups[i][p]);
			}
		}
	}
outOfCirculation:
	if (isRelay)
	{
		fout << "<tr height=19 valign=middle style='height:14.25pt'>" <<
			"<td colspan = 3 height = 19 class = xl74 style = 'height:14.25pt'>" << thisGame.gameName << "</td>" <<
			"<td></td>" <<
			"<td class = xl65>决赛成绩公告</td>" <<
			"<td></td>" <<
			"</tr>" <<
			"<tr height = 19 valign = middle style = 'height:14.25pt'>" <<
			"<td height = 19 class = xl68 align = center style = 'height:14.25pt'>名次</td>" <<
			"<td class = xl68 align = center>道</td>" <<
			"<td class = xl68 align = center>姓名</td>" <<
			"<td class = xl68 align = center>单位</td>" <<
			"<td class = xl70>成绩</td>" <<
			"<td class = xl68 align = center>备注</td>" <<
			"</tr>";

		std::vector<athlete> temp;
		for (int i(0), j(thisGame.groups.size()); i < j; ++i)
		{
			for (int p(0); p < Setting::LineNums; ++p)
			{
				if (!thisGame.groups[i][p].name.empty())
				{
					temp.push_back(thisGame.groups[i][p]);
				}
			}
		}
		std::sort(temp.begin(), temp.end());
		int j = 1;
		for (int p(0), q(temp.size()); p < q; ++p)
		{
			if (p != 0)
			{
				j = (temp[p].grade == temp[p - 1].grade) ? j : p + 1;
			}
			if (temp[p].grade < 10000.0)
			{
				fout << "<tr height = 19 valign = middle style = 'height:14.25pt'>" <<
					"<td height = 19 class = xl67 align = center style = 'height:14.25pt'><font" <<
					"color = '#000000'>" << j << "</font></td>" <<
					"<td class = xl67 align = center><font color = '#000000'>" << temp[p].line << "</font></td>" <<
					"<td class = xl67 align = center>" << temp[p].name << "</td>" <<
					"<td class = xl67 align = center>" << teamNames[temp[p].team] << "</td>" <<
					"<td class = xl69>" << temp[p].gradeStr << "</td>"
					"<td class = xl67 align = center></td>" <<
					"</tr>";

				if (j <= 8)
				{
					scores[temp[p].team].score += Setting::rankScores[j - 1] * thisGame.weight;
				}
			}
			else
			{
				fout << "<tr height = 19 valign = middle style = 'height:14.25pt'>" <<
					"<td height = 19 class = xl67 align = center style = 'height:14.25pt'><font" <<
					"color = '#000000'></font ></td>" <<
					"<td class = xl67 align = center><font color = '#000000'>" << temp[p].line << "</font></td>" <<
					"<td class = xl67 align = center>" << temp[p].name << "</td>" <<
					"<td class = xl67 align = center>" << teamNames[temp[p].team] << "</td>" <<
					"<td class = xl69>" << temp[p].gradeStr << "</td>"
					"<td class = xl67 align = center></td>" <<
					"</tr>";
				
			}
		}
		fout << "<tr height=19 valign=middle style='height:14.25pt'>" <<
			"<td height = 19 class = btd style = 'height:14.25pt'></td>" <<
			"<td class = btd></td>" <<
			"<td class = btd></td>" <<
			"<td class = btd></td>" <<
			"<td class = btd></td>" <<
			"<td class = btd></td>" <<
			"</tr>";
	}
	else
	{
		std::sort(athletes[0].begin(), athletes[0].end());
		std::sort(athletes[1].begin(), athletes[1].end());
		std::sort(athletes[2].begin(), athletes[2].end());
		for (int i(0); i < 3; ++i)
		{
			fout << "<tr height=19 valign=middle style='height:14.25pt'>" <<
				"<td colspan = 3 height = 19 class = xl74 style = 'height:14.25pt'>" << thisGame.gameName 
				<< Setting::classDisplay[i] << "组" << "</td>" <<
				"<td></td>" <<
				"<td class = xl65>决赛成绩公告</td>" <<
				"<td></td>" <<
				"</tr>" <<
				"<tr height = 19 valign = middle style = 'height:14.25pt'>" <<
				"<td height = 19 class = xl68 align = center style = 'height:14.25pt'>名次</td>" <<
				"<td class = xl68 align = center>道</td>" <<
				"<td class = xl68 align = center>姓名</td>" <<
				"<td class = xl68 align = center>单位</td>" <<
				"<td class = xl70>成绩</td>" <<
				"<td class = xl68 align = center>备注</td>" <<
				"</tr>";

			std::vector<athlete> &thisClass = athletes[i];
			int j = 1;
			for (int p(0), q(thisClass.size()); p < q; ++p)
			{
				if (p != 0)
				{
					j = (thisClass[p].grade == thisClass[p - 1].grade) ? j : p + 1;
				}
				if (thisClass[p].grade < 10000.0)
				{
					fout << "<tr height = 19 valign = middle style = 'height:14.25pt'>" <<
						"<td height = 19 class = xl67 align = center style = 'height:14.25pt'><font" <<
						"color = '#000000'>" << j << "</font></td>" <<
						"<td class = xl67 align = center><font color = '#000000'>" << thisClass[p].line << "</font></td>" <<
						"<td class = xl67 align = center>" << thisClass[p].name << "</td>" <<
						"<td class = xl67 align = center>" << teamNames[thisClass[p].team] << "</td>" <<
						"<td class = xl69>" << thisClass[p].gradeStr << "</td>"
						"<td class = xl67 align = center></td>" <<
						"</tr>";
					
					if (j <= 8)
					{
						scores[thisClass[p].team].score += Setting::rankScores[j - 1] * thisGame.weight;
					}
				}
				else
				{
					fout << "<tr height = 19 valign = middle style = 'height:14.25pt'>" <<
						"<td height = 19 class = xl67 align = center style = 'height:14.25pt'><font" <<
						"color = '#000000'></font></td>" <<
						"<td class = xl67 align = center><font color = '#000000'>" << thisClass[p].line << "</font></td>" <<
						"<td class = xl67 align = center>" << thisClass[p].name << "</td>" <<
						"<td class = xl67 align = center>" << teamNames[thisClass[p].team] << "</td>" <<
						"<td class = xl69>" << thisClass[p].gradeStr << "</td>"
						"<td class = xl67 align = center></td>" <<
						"</tr>";
				}
			}
			fout << "<tr height=19 valign=middle style='height:14.25pt'>" <<
				"<td height = 19 class = btd style = 'height:14.25pt'></td>" <<
				"<td class = btd></td>" <<
				"<td class = btd></td>" <<
				"<td class = btd></td>" <<
				"<td class = btd></td>" <<
				"<td class = btd></td>" <<
				"</tr>";
		}
	}

	fout << "<tr height=19 valign=middle style='height:14.25pt'>" <<
		"<td height = 19 style = 'height:14.25pt'></td>" <<
		"<td class=xl66 colspan=4 style='mso-ignore:colspan'>备注：<span" <<
		"style = 'mso-spacerun:yes'></span>  DSQ：犯规<span style = 'mso-spacerun:yes'>" <<
		"</span>  DNS：弃权</td><td></td><td></td></tr>";
	fout << "<tr height = 19 valign = middle style = 'height:14.25pt'>" <<
		"<td height = 19 style = 'height:14.25pt'></td>" <<
		"<td class = xl71 colspan = 4 style = 'mso-ignore:colspan'>" <<
		"室温 : " << thisCom->getTempeture() << "℃<span style = 'mso-spacerun:yes'></span>   水温 : " << thisCom->getWaterTempeture() << "℃</td>" <<
		"<td></td></tr>";

	fout << thisCom->getTail();
	fout.close();
}

void ControlWindow::outPutTeamScore(void)
{
	std::ofstream fout(std::string("Result/") + thisCom->getCompName() + std::string("总积分.txt"));
	std::sort(scores.begin(), scores.end());
	std::reverse(scores.begin(), scores.end());
	int thisScore(0), thisRank(1);
	for (int i(0), j(scores.size()); i < j; ++i)
	{
		if (i != 0)
		{
			thisRank = (scores[i].score == scores[i - 1].score) ? thisRank : i + 1;
		}
		fout << thisRank << '\t' << teamNames[scores[i].team] << '\t' << scores[i].score << std::endl;
	}
	fout.close();
}