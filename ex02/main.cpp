#include <iostream>
#include <string>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "La dirección de memoria de la variable de tipo string " << &brain << std::endl;
	std::cout << "La dirección de memoria contenida en stringPTR " << stringPTR << std::endl;
	std::cout << "La dirección de memoria contenida en stringREF " << &stringREF << std::endl;

	std::cout << "El valor de la variable string " << brain << std::endl;
	std::cout << "El valor apuntado por stringPTR " << *stringPTR << std::endl;
	std::cout << "El valor apuntado por stringREF " << stringREF << std::endl;
	return (0);
}