#pragma once
#include <string>
#include <vector>
#include "Skill.hpp"

struct Project
{
	std::string name{};
	int daysToConplete = 0;
	int scoreAwarded = 0;
	int bestBeforeDay = 0;
	int numberOfRoles = 0;
	int startingDay = 0;
	std::vector<Skill> requiredSkills{};
	std::vector<Contributor> contributors{};
};