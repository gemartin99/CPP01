#include "Weapon.hpp"

void	Weapon::setType(const std::string newtype){ type = newtype; }

const std::string 	&Weapon::getType(){ return (type); }

Weapon::Weapon(std::string type): type(type)
{
}
