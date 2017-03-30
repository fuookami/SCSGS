#include "ScreenWindow.h"

#include <QtGui/QScreen>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDesktopWidget>

ScreenWindow::ScreenWindow(int mode, std::vector<std::string> _teamNames, QWidget *parent) :QMainWindow(parent), teamNames(_teamNames)
{
	ui = new Ui::ScreenWindow();
	ui->setupUi(this);
	this->setWindowFlags(Qt::FramelessWindowHint);
	setAutoFillBackground(true);
	if (mode == Screen)
	{
		static QScreen *pScr = QApplication::screens()[1];
		setGeometry(pScr->availableGeometry().x(), pScr->availableGeometry().y(), 1258, 674);
	}
	else if (mode == Monitor)
	{
		this->setGeometry(0, 0, 1258, 674);
	}
	ui->bgi->setStyleSheet("background-color: RGB(0,0,0);");

	setMap();

	ui->CompetitionName->setText(QString::fromLocal8Bit(QByteArray("比赛还未正式开始")));
}

ScreenWindow::~ScreenWindow(void)
{
	
}

void ScreenWindow::refresh(const std::array<athlete, Setting::LineNums> &thisGroup)
{
	clearWindow();
	for (int i(0); i < Setting::LineNums; ++i)
	{
		setLine(i, thisGroup[i]);
	}
}

void ScreenWindow::setGame(const std::string & gameName)
{
	ui->CompetitionName->setText(QString::fromLocal8Bit(gameName.c_str()));
}

void ScreenWindow::setStop(void)
{
	clearWindow();
	ui->CompetitionName->setText(QString::fromLocal8Bit(QByteArray("比赛暂停")));
}

void ScreenWindow::setEnd(void)
{
	clearWindow();
	ui->CompetitionName->setText(QString::fromLocal8Bit(QByteArray("已完赛")));
}

void ScreenWindow::setLine(int line, const athlete &ath)
{
	if (ath.name.empty())
	{
		return;
	}
	else
	{
		names[line]->setText(QString::fromLocal8Bit(ath.name.c_str()));
		teams[line]->setText(QString::fromLocal8Bit(teamNames[ath.team].c_str()));
		classes[line]->setText(QString::fromLocal8Bit(Setting::classDisplay[ath.cla].c_str()));
		if (ath.hasGrade)
		{
			grades[line]->setText(QString::fromLocal8Bit(ath.gradeStr.c_str()));
			if (ath.thisRank > 0)
			{
				ranks[line]->setText(QString::fromLocal8Bit(std::to_string(ath.thisRank).c_str()));
			}
		}
	}
}

void ScreenWindow::clearWindow(void)
{
	ui->CompetitionName->clear();
	for (int i(0); i < Setting::LineNums; ++i)
	{
		names[i]->clear();
		teams[i]->clear();
		grades[i]->clear();
		ranks[i]->clear();
		classes[i]->clear();
	}
}

void ScreenWindow::setMap(void)
{
	names[0] = ui->Line0Name;
	names[1] = ui->Line1Name;
	names[2] = ui->Line2Name;
	names[3] = ui->Line3Name;

	teams[0] = ui->Line0Team;
	teams[1] = ui->Line1Team;
	teams[2] = ui->Line2Team;
	teams[3] = ui->Line3Team;

	classes[0] = ui->Line0Class;
	classes[1] = ui->Line1Class;
	classes[2] = ui->Line2Class;
	classes[3] = ui->Line3Class;

	grades[0] = ui->Line0Grade;
	grades[1] = ui->Line1Grade;
	grades[2] = ui->Line2Grade;
	grades[3] = ui->Line3Grade;

	ranks[0] = ui->Line0Rank;
	ranks[1] = ui->Line1Rank;
	ranks[2] = ui->Line2Rank;
	ranks[3] = ui->Line3Rank;
}