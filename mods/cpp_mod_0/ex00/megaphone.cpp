#include <iostream>

int	len(char *str)
{
	int	i;

	i = -1;
	while (str[++i]);
	return (i);
}

bool	is_upper_char(char c)
{
	if (c >= 65 && c <= 90)
		return (true);
	return (false);
}

bool	is_char(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (true);
	return (false);
}

int main(int ac, char *av[])
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		for (int i = 1; i < ac; i++)
		{
			for (int j = 0; j < len(av[i]); j++)
			{
				if (is_upper_char(av[i][j]) || !is_char(av[i][j]))
					std::cout << av[i][j];
				else
					std::cout << av[i][j] - 32;
			}
			std::cout << ' ';
		}
		std::cout << '\n';
	}
	return (0);
}
