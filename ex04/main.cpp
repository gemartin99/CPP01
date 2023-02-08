#include <iostream>
#include <string>
#include <fstream>

std::string ft_read(char *fd)
{
	std::ifstream File;
	std::string res;
	std::string line;

	File.open(fd);
	if (!File.is_open()) 
	{
		std::cout << "No se puede abrir el fichero" << std::endl;
		exit (1);
	}
	else
	{
		while (!File.eof())
		{
			std::getline(File, line);
			res = res + line;
			if (!File.eof())
				res += '\n';
		}
	}
	File.close();
	return (res);
}

std::string replace_str(std::string text, std::string s1, std::string s2, std::string fd)
{
	std::ofstream outfile;

	outfile.open(fd + ".replace");
	if (!outfile.is_open())
	{
		std::cout << "Failed to open the file" << std::endl;
		exit(1);
	}
	std::size_t found = text.find(s1);
	while (found != std::string::npos)
	{
		text.erase(found, s1.length());
		text.insert(found, s2);
		found = text.find(s1, found + s2.length());
	}
	outfile << text;
	outfile.close();
	return (text);
}

int main(int argc, char **argv)
{
	std::string res;
	if (argc != 4)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return (0);
	}
	else if (!argv[1][0] || !argv[2][0] || !argv[3][0])
	{
		std::cout << "Invalid empty arg" << std::endl;
		return (0);
	}
	res = ft_read(argv[1]);
	replace_str(res, argv[2], argv[3], argv[1]);
	return (0);
}
