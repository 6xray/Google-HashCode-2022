#pragma once

#include <string>
#include <vector>

struct Project
{
	std::string name{};
	int daysToComplete = 0;
	int scoreAwarded = 0;
	int bestBeforeDay = 0;
	int numberOfRoles = 0;
	int startingDay = 0;
	std::unordered_map<std::string, int> requiredSkills{};
	std::vector<Contributor*> contributors{};
};