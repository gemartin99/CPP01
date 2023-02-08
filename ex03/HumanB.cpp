#include "HumanB.hpp"

void HumanB::setWeapon(Weapon &newweapon)
{
	this->weapon = &newweapon;
}

void HumanB::attack()
{
	if (!this->weapon)
	{
		std::cout << name << " has no weapon" << std::endl;
	}
	else
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

HumanB::HumanB (std::string name): name(name)
{
	this->weapon = nullptr;
}

