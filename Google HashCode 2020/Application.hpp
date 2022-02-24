#pragma once

#include <string>
#include <vector>

#include "Contributor.hpp"
#include "Project.hpp"

class Application
{
public:
	void parseFile(std::string const& filePath);

private:
	std::vector<Contributor> contributors;
	std::vector<Project> projects;
};