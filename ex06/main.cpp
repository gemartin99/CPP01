#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;

	if (argc != 2)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		exit (0);
	}
	harl.complain(argv[1]);
	exit (0);
}