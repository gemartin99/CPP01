#include <iostream>
#include <string>
#include <fstream>

std::string ft_read(char *fd)
{
	std::ifstream File;
	std::string res = "";

	File.open(fd);
	if (File.is_open()) 
	{
		std::string line;
		while (getline(File, line))
			res = res + line;
	}
	else
	{
		std::cout << "No se puede abrir el fichero" << std::endl;
		exit (1);
	}
	File.close();
	return (res);
}

std::string replace_str(std::string text, std::string s1, std::string s2, std::string fd)
{
	std::ofstream outfile;
	std::fstream writefile;
	std::string	result;
	int end;

	outfile.open(fd + ".replace");
	//writefile.open(fd + ".replace", std::fstream::out);
	if (!outfile.is_open())
	{
		std::cout << "Failed to open the file" << std::endl;
		exit(1);
	}
	std::size_t found = text.find(s1);
	while (found != std::string::npos)
	{
		result = text.substr(0, found);
		result = result + s2;
		end = found + s1.length();
		result = result + text.substr(end, text.length() - found);
		outfile << result << std::endl;
		outfile.close();
		text = text.substr(found, text.length() - found);
		found = text.find(s1);
		//text = replace_str(text, s1, s2, fd);
	}
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
