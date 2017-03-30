#include "ControlWindow.h"

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
	ui->CompetitionName->setText(QString::fromLocal8Bit(QByteArray("比赛还未正式开始")));

	connect(ui->StartBtn, SIGNAL(clicked()), this, SLOT(startComp()));
	ui->StopBtn->setEnabled(false);
	ui->ContinueBtn->setEnabled(false);
	ui->Refresh->setEnabled(false);
	ui->Next->setEnabled(false);

	teamScore demo = { 0, 0 };
	for (int i(0), j(thisCom->getTeamNames().size()); i < j; ++i)
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

	disconnect(ui->StartBtn, SIGNAL(clicked()));
	ui->StartBtn->setEnabled(false);
	ui->Next->setEnabled(true);

	connect(ui->Next, SIGNAL(clicked()), this, SLOT(nextGroup()));
	connect(ui->StopBtn, SIGNAL(clicked()), this, SLOT(stopComp()));
	connect(ui->ContinueBtn, SIGNAL(clicked()), this, SLOT(continueComp()));
	connect(ui->Refresh, SIGNAL(clicked()), this, SLOT(refresh()));
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
	std::string compName = thisGame.gameName;
	if (thisGame.groups.size() != 1)
	{
		compName += Setting::groupNames[thisGame.currentGroup];
	}
	monitor->refresh(thisGame.groups[thisGame.currentGroup]);
	monitor->setGame(compName);
	screenWin->refresh(thisGame.groups[thisGame.currentGroup]);
	screenWin->setGame(compName);
}

void ControlWindow::nextGroup(void)
{
	if (thisGame.currentGroup != -1)
	{
		ui->StopBtn->setEnabled(true);
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
	std::string compName = thisGame.gameName;
	if (thisGame.groups.size() != 1)
	{
		compName += Setting::groupNames[thisGame.currentGroup];
	}
	ui->CompetitionName->setText(QString::fromLocal8Bit((compName.c_str())));
	monitor->refresh(thisGame.groups[thisGame.currentGroup]);
	monitor->setGame(compName);
	screenWin->refresh(thisGame.groups[thisGame.currentGroup]);
	screenWin->setGame(compName);
	for (int i(0); i < Setting::LineNums; ++i)
	{
		setLine(i);
	}
	ui->Next->setEnabled(false);
	ui->Refresh->setEnabled(true);
}

void ControlWindow::refresh(void)
{
	for (int i(0); i < 4; ++i)
	{
		getGrade(i);
	}
	std::array<athlete, 4> temp(thisGame.groups[thisGame.currentGroup]);
	std::sort(temp.begin(), temp.end());
	for (int i(0), j(1); i < 4; ++i)
	{
		if (temp[i].name.empty())
		{
			continue;
		}
		if (i != 0)
		{
			j = (temp[i].grade == temp[i - 1].grade) ? j : i + 1;
		}
		std::array<athlete, 4>::iterator thisRank
			(std::find(thisGame.groups[thisGame.currentGroup].begin(), thisGame.groups[thisGame.currentGroup].end(), temp[i]));
		thisRank->thisRank = (thisRank->grade < 10000.0) ? j : -1;
	}
	std::string compName = thisGame.gameName;
	if (thisGame.groups.size() != 1)
	{
		compName += Setting::groupNames[thisGame.currentGroup];
	}
	screenWin->refresh(thisGame.groups[thisGame.currentGroup]);
	screenWin->setGame(compName);
	monitor->refresh(thisGame.groups[thisGame.currentGroup]);
	monitor->setGame(compName);
	ui->CompetitionName->setText(QString::fromLocal8Bit(compName.c_str()));
	ui->Next->setEnabled(true);
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

	teams[0] = ui->Line0Team;
	teams[1] = ui->Line1Team;
	teams[2] = ui->Line2Team;
	teams[3] = ui->Line3Team;

	qs[0] = ui->Line0Q;
	qs[1] = ui->Line1Q;
	qs[2] = ui->Line2Q;
	qs[3] = ui->Line3Q;

	dqs[0] = ui->Line0DQ;
	dqs[1] = ui->Line1DQ;
	dqs[2] = ui->Line2DQ;
	dqs[3] = ui->Line3DQ;

	mins[0] = ui->Line0Min;
	mins[1] = ui->Line1Min;
	mins[2] = ui->Line2Min;
	mins[3] = ui->Line3Min;

	secs[0] = ui->Line0Sec;
	secs[1] = ui->Line1Sec;
	secs[2] = ui->Line2Sec;
	secs[3] = ui->Line3Sec;

	hun_msecs[0] = ui->Line0HunMSec;
	hun_msecs[1] = ui->Line1HunMSec;
	hun_msecs[2] = ui->Line2HunMSec;
	hun_msecs[3] = ui->Line3HunMSec;
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
		thisAth.gradeStr = std::string("犯规");
		thisAth.grade = 10000.0;
	}
	else if (dqs[line]->isChecked())
	{
		thisAth.gradeStr = std::string();
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
			thisAth.gradeStr = std::string(mins[line]->toPlainText().toLocal8Bit()) + std::string("\'");
		}
		thisAth.gradeStr.append(std::string(secs[line]->toPlainText().toLocal8Bit()) + std::string("\"")
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
	std::ofstream fout(std::string("Result/") + thisCom->getCompName() + thisGame.gameName + std::string("��������.txt"));
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
		std::vector<athlete> temp;
		for (int i(0), j(thisGame.groups.size()); i < j; ++i)
		{
			for (int p(0); p < Setting::LineNums; ++p)
			{
				temp.push_back(thisGame.groups[i][p]);
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
				fout << j << '\t' << temp[p].name << '\t' << temp[p].gradeStr << std::endl;
				if (j <= 8)
				{
					scores[temp[p].team].score += Setting::rankScores[j - 1] * thisGame.weight;
				}
			}
			else
			{
				fout << '\t' << temp[p].name << '\t' << temp[p].gradeStr << std::endl;
			}
		}
	}
	else
	{
		std::sort(athletes[0].begin(), athletes[0].end());
		std::sort(athletes[1].begin(), athletes[1].end());
		std::sort(athletes[2].begin(), athletes[2].end());
		for (int i(0); i < 3; ++i)
		{
			std::vector<athlete> &thisClass = athletes[i];
			int j = 1;
			fout << std::endl << Setting::classDisplay[i] << "�飺" << std::endl;
			for (int p(0), q(thisClass.size()); p < q; ++p)
			{
				if (p != 0)
				{
					j = (thisClass[p].grade == thisClass[p - 1].grade) ? j : p + 1;
				}
				if (thisClass[p].grade < 10000.0)
				{
					fout << j << '\t' << thisClass[p].name << '\t' << thisClass[p].gradeStr << std::endl;
					if (j <= 8)
					{
						scores[thisClass[p].team].score += Setting::rankScores[j - 1] * thisGame.weight;
					}
				}
				else
				{
					fout << '\t' << thisClass[p].name << '\t' << thisClass[p].gradeStr << std::endl;
				}
			}
			fout << std::endl;
		}
	}
}

void ControlWindow::outPutTeamScore(void)
{
	std::ofstream fout(std::string("result/") + thisCom->getCompName() + std::string("总积分.txt"));
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