#pragma once

#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <array>

using athlete = struct athleteStr
{
	std::string name;
	int cla;
	int team;
	double grade;
	std::string gradeStr;
	bool hasGrade = false;
	int thisRank;
};

bool operator<(const athlete &a, const athlete &b);
bool operator==(const athlete &a, const athlete &b);

using teamScore = struct teamScoreStr
{
	int team;
	int score;
};

bool operator<(const teamScore &a, const teamScore &b);

using game = struct gameStr
{
	std::string gameName;
	int weight;
	int currentGroup;
	std::vector<std::array<athlete, 10>> groups;
};

namespace Setting
{
	static const std::vector<std::string> groupNames = { "第一组", "第二组", "第三组", "第四组", "第五组", "第六组", "第七组", "第八组", "第九组", "第十组", "第十一组", "第十二组", "第十三组", "第十四组", "第十五组", "第十六组", "第十七组", "第十八组", "第十九组", "第二十组" };
	static const std::array<int, 8> rankScores = { 9, 7, 6, 5, 4, 3, 2, 1 };
	static const std::array<std::string, 3> dataNames = { "data/gameSetting.txt","data/teamsName.txt","data/game.txt" };
	static const std::array<std::string, 4> classes = { "甲","乙","丙","丁" };
	static const std::array<std::string, 4> classDisplay = { "甲","乙","丙","" };
	static const unsigned LineNums = 10;
}