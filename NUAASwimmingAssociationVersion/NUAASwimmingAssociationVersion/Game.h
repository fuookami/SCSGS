#pragma once

#include "Athlete.h"
#include <vector>

using Line = std::tuple<unsigned int, unsigned int, std::string, Time>;

struct Group
{
	unsigned int groupOrder;
	std::vector<Line> lines;
};

class Game
{
public:
private:
	Time matchRecord;
	std::vector<Group> groups;
};