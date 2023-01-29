#ifndef Zombie_HPP
# define Zombie_HPP

# include <string>
# include <iostream>

class Zombie
{
private:
	std::string name;
public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie();
	void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif