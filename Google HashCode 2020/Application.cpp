#include "Application.hpp"

#include <fstream>
#include <iostream>
#include <sstream>

void Application::parseFile(std::string const& filePath)
{
	std::ifstream file(filePath);

	if (!file.is_open()) 
	{
		std::cout << "Failed to load file " + filePath;
		return;
	}

	// Read first line
	std::string line;
	std::getline(file, line);
	std::istringstream iss(line);

	int contributorCount, projectCount;
	iss >> contributorCount >> projectCount;

	for (int i = 0; i < contributorCount; i++)
	{
		std::getline(file, line);
		std::istringstream iss2(line);

		Contributor contributor;
		int numberOfSkills;
		iss2 >> contributor.name >> numberOfSkills;

		for (int j = 0; j < numberOfSkills; j++)
		{
			std::getline(file, line);
			std::istringstream iss3(line);

			std::string name;
			int skillLevel;

			iss3 >> name >> skillLevel;

			contributor.skills.emplace(name, skillLevel);
		}

		contributors.push_back(contributor);
	}

	for (int i = 0; i < projectCount; i++)
	{
		std::getline(file, line);
		std::istringstream iss2(line);

		Project project;
		int numberOfSkills;
		iss2 >> project.name >> project.daysToComplete >> project.scoreAwarded >> project.bestBeforeDay >> project.numberOfRoles;

		for (int j = 0; j < project.numberOfRoles; j++)
		{
			std::getline(file, line);
			std::istringstream iss3(line);

			std::string name;
			int skillLevel;

			iss3 >> name >> skillLevel;

			project.requiredSkills.emplace(name, skillLevel);
		}

		projects.push_back(project);
	}

	std::cout << "Contributors : " << contributors.size() << ", projects : " << projects.size();
}

