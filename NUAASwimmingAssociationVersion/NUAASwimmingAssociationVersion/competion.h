#pragma once

#include "basic.h"

class Competion
{
public:
	Competion(void);
	~Competion(void);

	const std::vector<std::string> &getTeamNames(void) const;
	const std::vector<std::string> &getGameNames(void) const;
	const std::string &getCompName(void) const;
	const std::string &getTempeture(void) const;
	const std::string &getWaterTempeture(void) const;
	const std::string &getHead(void) const;
	const std::string &getTail(void) const;

	std::vector<game>::size_type getGameNum(void) const;
	game &getGameByOrder(const std::vector<game>::size_type & or);

private:
	std::vector<game> games;
	std::vector<std::string> teamNames;
	std::vector<std::string> gameNames;
	std::vector<unsigned> gameWeights;
	std::string compName;
	std::string tempeture;
	std::string waterTempeture;
	std::string head;
	std::string tail;
	bool has_rank;
	int use_line;
	int start_line;
};