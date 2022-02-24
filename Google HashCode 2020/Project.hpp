#pragma once
#include <string>
#include <vector>
#include "Skill.hpp"

struct Project
{
	std::string name;
	int daysToConplete;
	int scoreAwarded;
	int bestBeforeDay;
	int numberOfRoles;
	std::vector<Skill> requiredSkills;
};