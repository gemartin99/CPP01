# include "Zombie.hpp"

int main(void)
{
	Zombie *z1= newZombie("Messi");
	z1->announce();
	delete(z1);
	randomChump("Cristiano");
	return(0);
}