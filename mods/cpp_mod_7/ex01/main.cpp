#include "iter.hpp"

void	addOne(int &i)
{
	i++;
}


void	upperCase(char &c)
{
	if (c >= 97 && c <= 122)
		c -= (97 - 65);
}

int main( void ) 
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	iter(a, 10, addOne);

	for (int i = 0; i < 10; i++)
	{
		std::cout << a[i] << std::endl;
	}

	char word[] = {'R', 'i', 'c', 'a', 'r', 'd', 'o', '\0'};
	iter(word, 8, upperCase);
	std::cout << word << std::endl;
	return 0;
}

// int main() 
// {
// 	const int tab[] = { 0, 1, 2, 3, 4 };
// 	const Awesome tab2[5];
// 	iter( tab, 5, print );
// 	iter( tab2, 5, print );
// 	return (0);
// }
