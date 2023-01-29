# include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << name << " destruido" << std::endl;
}

Zombie::Zombie(void)
{
//	std::cout << "Constructor ejecutado" << std::endl;
}

Zombie::Zombie(std::string name)
{ 
	this->name=name;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}