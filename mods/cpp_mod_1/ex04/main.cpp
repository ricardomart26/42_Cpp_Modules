#include <iostream>
#include <fstream>

int	strstr(std::string src, std::string find)
{
	int	i;
	int	x;

	i = 0;
	while (src[i])
	{
		x = 0;
		if (src[i] == find[x])
		{
			while (src[i] && find[x] && src[i++] == find[x++])
			{
				if (x == (int)find.size())
					return (i - x);
			}
		}
		if (src[i])
			i++;
	}
	return (-1);
}

std::string	replace_strings(const std::string& line, const std::string& s2, int pos, int len_s1)
{
	int			i;
	std::string	ret;
	int			x;

	x = -1;
	while (++x < pos)
		ret.push_back(line[x]);
	i = 0;
	while (i < (int)s2.size())
		ret.push_back(s2[i++]);
	
	if (len_s1 < (int)s2.size())
		while (line[x + len_s1])
			ret.push_back(line[x++ + len_s1]);
	else if (len_s1 > (int)s2.size())
		while (line[x + len_s1])
			ret.push_back(line[x++ + len_s1]);
	else
		while (line[pos])
			ret.push_back(line[pos++]);
	// ret.push_back('\0');
	return (ret);
}

std::string	remove_ext(const std::string &filename)
{
	size_t pos = filename.find_last_of(".");
	if (pos == std::string::npos)
		return (filename);
	return (filename.substr(0, pos));

}

void	replace_strings_in_file(const std::string& filename, const std::string& s1, const std::string& s2)
{
	std::fstream fd(filename.c_str());
	if (!fd)
	{
		std::cout << "file doesn't exist or doesn't have permissions, try again\n";
		return ;
	}
	std::fstream file_to_replace(remove_ext(filename) + ".replace", std::ios::out);
	std::string line;
	int	pos;

	while (!fd.eof())
	{
		std::getline(fd, line);
		pos = strstr(line, s1);
		if (pos != -1)
			line = replace_strings(line, s2, pos, s1.size());
		file_to_replace << line << std::endl;
	}
	fd.close();
}

int main(void)
{
	std::string	filename;
	std::string	s1;
	std::string	s2;

	while (filename.empty())
	{
		std::cout << "Enter a filename at your choise: ";
		std::getline(std::cin, filename);
	}
	while (s1.empty())
	{
		std::cout << "Enter a string to replace: ";
		std::getline(std::cin, s1);
	}	
	while (s2.empty())
	{
		std::cout << "Enter a string thats going to replace: ";
		std::getline(std::cin, s2);
	}
	replace_strings_in_file(filename, s1, s2);
	return (0);
}
