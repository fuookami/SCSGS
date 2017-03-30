#pragma once

#include "ui_ScreenWindow.h"
#include "basic.h"
#include <QtWidgets/QMainWindow>

enum screenWindowMode
{
	Screen,
	Monitor
}; 

class ScreenWindow :public QMainWindow
{
	Q_OBJECT;

public:
	ScreenWindow(int mode, std::vector<std::string> _teamNames, QWidget *parent = nullptr);
	~ScreenWindow(void);

	void refresh(const std::array<athlete, Setting::LineNums> &thisGroup);
	void setGame(const std::string &gameName);
	void setStop(void);
	void setEnd(void);

private:
	Ui::ScreenWindow *ui;
	std::array<QLabel *, Setting::LineNums> names;
	std::array<QLabel *, Setting::LineNums> teams;
	std::array<QLabel *, Setting::LineNums> classes;
	std::array<QLabel *, Setting::LineNums> grades;
	std::array<QLabel *, Setting::LineNums> ranks;
	std::vector<std::string> teamNames;

private:
	void setLine(int line, const athlete &ath);
	void clearWindow(void);
	void setMap(void);
};