#pragma once

#include "Time.h"
#include <vector>

class Athlete
{
public:
private:
	unsigned int uiCode;
	std::string code;
	unsigned int team;
	std::vector<std::pair<bool, unsigned int>> games;
};