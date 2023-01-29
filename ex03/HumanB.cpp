#include "HumanB.hpp"

void HumanB::setWeapon(Weapon &newweapon)
{
	this->weapon = &newweapon;
}

void HumanB::attack()
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

HumanB::HumanB (std::string name): name(name)
{
}

