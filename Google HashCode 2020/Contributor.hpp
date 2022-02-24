#pragma once

#include <string>
#include <vector>
#include <unordered_map>

struct Contributor
{
	std::string name{};
	std::unordered_map<std::string, int> skills{};
	bool isFree{false};

	bool hasSkill(std::string const& name);
};