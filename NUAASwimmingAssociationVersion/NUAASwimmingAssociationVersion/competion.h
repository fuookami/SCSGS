#pragma once

#include "basic.h"

class competion
{
public:
	competion(void);
	~competion(void);

	const std::vector<std::string> &getTeamNames(void) const;
	const std::vector<std::string> &getGameNames(void) const;
	const std::string &getCompName(void) const;

	std::vector<game>::size_type getGameNum(void) const;
	game &getGameByOrder(const std::vector<game>::size_type & or);

private:
	std::vector<game> games;
	std::vector<std::string> teamNames;
	std::vector<std::string> gameNames;
	std::vector<unsigned> gameWeights;
	std::string compName;
	bool has_rank;
	int use_line;
	int start_line;
};