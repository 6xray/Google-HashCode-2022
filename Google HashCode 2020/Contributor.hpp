#pragma once

#include <string>
#include <vector>

#include "Skill.hpp"

struct Contributor
{
	std::string name;
	std::vector<Skill> skills;
};