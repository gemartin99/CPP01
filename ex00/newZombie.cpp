# include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *temp;
	temp = new Zombie(name);
	return (temp);
}