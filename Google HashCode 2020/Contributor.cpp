#include "Contributor.hpp"

bool Contributor::hasSkill(std::string const& name)
{
    return skills.contains(name);
}
