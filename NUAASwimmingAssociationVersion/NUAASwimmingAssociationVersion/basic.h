#pragma once

#include "ResultTime.h"
#include <vector>
#include <array>

namespace Setting
{
	static const std::vector<std::string> groupNames = { "��һ��", "�ڶ���", "������", "������", "������", "������", "������", "�ڰ���", 
		"�ھ���", "��ʮ��", "��ʮһ��", "��ʮ����", "��ʮ����", "��ʮ����", "��ʮ����", "��ʮ����", "��ʮ����", "��ʮ����", "��ʮ����", "�ڶ�ʮ��" };
	static const std::array<std::string, 3> dataNames = { "data/gameSetting.txt","data/teamsName.txt","data/game.txt" };
	static const unsigned LineNums = 10;
}

struct Athlete
{
	struct GameApplyInfo
	{
		unsigned int gameIndex;
		unsigned int groupIndex;
		unsigned int lineIndex;

		ResultTime time;
		unsigned int groupRank;
		unsigned int rank;
		unsigned int getedGrade;
	};

	unsigned int uiCode;
	std::string code;
	unsigned int teamIndex;
	unsigned int cla;
	std::vector<GameApplyInfo> games;
};

struct Team
{
	struct GameApplyInfo
	{
		unsigned int gameIndex;
		unsigned int athleteCode;
		Athlete *pAthlete;
		
		unsigned int getedGrades;
	};

	unsigned int teamIndex;
	unsigned int uiCode;
	std::string code;
	std::string name;

	std::vector<GameApplyInfo> games;
};

struct Line
{
	unsigned int gameIndex;
	unsigned int groupIndex;
	unsigned int lineIndex;
	unsigned int athleteCode;
	Athlete *pAthlete;
	ResultTime time;
	unsigned int groupRank;
};

struct Group
{
	unsigned int gameIndex;
	unsigned int groupIndex;
	std::array<Line, Setting::LineNums> lines;
	bool hasOnceInput = false;
};

struct Game
{
	unsigned int gameIndex;
	std::string gameName;
	// �Ƿ����Ŷ���Ŀ
	// ���ֱ���
	ResultTime matchRecord;
	std::vector<Group> groups;
};