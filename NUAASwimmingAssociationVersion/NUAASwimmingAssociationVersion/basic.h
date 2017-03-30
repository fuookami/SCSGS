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
	static const std::vector<std::string> groupNames = { "��һ��", "�ڶ���", "������", "������", "������", "������", "������", "�ڰ���", "�ھ���", "��ʮ��", "��ʮһ��", "��ʮ����", "��ʮ����", "��ʮ����", "��ʮ����", "��ʮ����", "��ʮ����", "��ʮ����", "��ʮ����", "�ڶ�ʮ��" };
	static const std::array<int, 8> rankScores = { 9, 7, 6, 5, 4, 3, 2, 1 };
	static const std::array<std::string, 3> dataNames = { "data/gameSetting.txt","data/teamsName.txt","data/game.txt" };
	static const std::array<std::string, 4> classes = { "��","��","��","��" };
	static const std::array<std::string, 4> classDisplay = { "��","��","��","" };
	static const unsigned LineNums = 10;
}