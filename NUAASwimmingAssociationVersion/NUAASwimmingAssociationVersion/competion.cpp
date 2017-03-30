#include "competion.h"
#include <sstream>

bool operator<(const teamScore &a, const teamScore &b)
{
	return a.score < b.score;
}

bool operator<(const athlete &a, const athlete &b)
{
	return a.grade < b.grade;
}

bool operator==(const athlete & a, const athlete & b)
{
	return a.name == b.name;
}

competion::competion(void)
{
	std::string tempStr;

	//读取比赛名字
	std::ifstream fin(Setting::dataNames[0]);
	fin >> compName;
	//是否分组
	fin >> has_rank;
	//有多少道次
	fin >> use_line >> start_line;
	fin.close();

	//读取队伍数与队伍名字
	fin.open(Setting::dataNames[1]);
	int teamNum;
	fin >> teamNum;
	fin.get();
	for (int i(0); i < teamNum; ++i)
	{
		getline(fin, tempStr);
		teamNames.push_back(tempStr);
	}
	fin.close();

	//读取项目数、项目名与各比赛人员信息
	fin.open(Setting::dataNames[2]);
	int gameNum;
	fin >> gameNum;
	fin.get();
	for (int i(0); i < gameNum; ++i)
	{
		game thisGame;
		thisGame.currentGroup = -1;
		fin >> thisGame.gameName >> thisGame.weight;
		gameNames.push_back(thisGame.gameName);

		int groupNum;
		fin >> groupNum;
		for (int i(0); i < groupNum; ++i)
		{
			std::array<athlete, Setting::LineNums> thisGroup;
			for (int i(0); i < Setting::LineNums; ++i)
			{
				thisGroup[i].grade = 1000000.0;
				thisGroup[i].thisRank = -1;
				thisGroup[i].cla = 3;
				thisGroup[i].hasGrade = false;
				thisGroup[i].team = 20;
			}
			int playerNum, playerStartLine;
			fin >> playerNum >> playerStartLine;
			int j(playerStartLine);
			fin.get();
			for (int k(0); k < playerNum; ++k)
			{
				std::string thisAthStr;
				getline(fin, thisAthStr);
				if (thisAthStr.empty())
				{
					continue;
				}

				std::istringstream sin(thisAthStr);

				athlete thisAth;
				sin >> thisAth.name;

				if (has_rank) {
					std::string tempClassStr;
					sin >> tempClassStr;
					thisAth.cla = std::find(Setting::classes.cbegin(), Setting::classes.cend(), tempClassStr) - Setting::classes.cbegin();
				}
				else {
					thisAth.cla = 3;
				}

				sin >> thisAth.team;
				--thisAth.team;
				thisAth.grade = 1000000.0;
				thisAth.thisRank = -1;
				thisAth.hasGrade = false;
				sin.clear();

				thisGroup[j++] = thisAth;
			}
			thisGame.groups.push_back(thisGroup);
		}
		games.push_back(thisGame);
	}
	fin.close();
}

competion::~competion(void)
{
}

const std::vector<std::string>& competion::getTeamNames(void) const
{
	return teamNames;
}

const std::vector<std::string> &competion::getGameNames(void) const {
	return gameNames;
}

const std::string &competion::getCompName(void) const
{
	return compName;
}

std::vector<game>::size_type competion::getGameNum(void) const
{
	return games.size();
}

game &competion::getGameByOrder(const std::vector<game>::size_type & or )
{
	return games[or];
}