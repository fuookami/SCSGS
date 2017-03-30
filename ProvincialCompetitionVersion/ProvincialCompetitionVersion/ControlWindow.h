#pragma once

#include "ScreenWindow.h"
#include "competion.h"
#include "ui_ControlWindow.h"
#include <QtMultimedia/QMediaPlayer>

class ControlWindow : public QMainWindow
{
	Q_OBJECT;

public:
	ControlWindow(QMainWindow *parent = nullptr);
	~ControlWindow(void);

private:
	ScreenWindow *screenWin;
	ScreenWindow *monitor;
	Ui::ControlWindow *ui;
	competion *thisCom;
	game thisGame;
	int currGameOr;
	int currLoadGameOr;
	std::vector<std::string> teamNames;
	std::vector<std::string> gameNames;
	std::vector<teamScore> scores;

	std::array<QLabel *, Setting::LineNums> names;
	std::array<QLabel *, Setting::LineNums> teams;
	std::array<QRadioButton *, Setting::LineNums> qs;
	std::array<QRadioButton *, Setting::LineNums> dqs;
	std::array<QTextEdit *, Setting::LineNums> mins;
	std::array<QTextEdit *, Setting::LineNums> secs;
	std::array<QTextEdit *, Setting::LineNums> hun_msecs;

private:
	void setMap(void);
	void getGrade(int line);

	void setLine(int line);
	void refreshWin(void);
	void clearWin(void);

private:
	void deal(void);
	void outPutTeamScore(void);

public slots:
	void startComp(void);
	void stopComp(void);
	void nextGroup(void);
	void continueComp(void);
	void refresh(void);
};