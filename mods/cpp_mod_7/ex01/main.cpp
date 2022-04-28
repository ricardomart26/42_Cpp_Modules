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
	
	for (int i = 0; i < 10; i++)
	{
		std::cout << "BEFORE: " << a[i] << std::endl;
	}

	iter(a, 10, addOne);
	std::cout << "\n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << "AFTER: " << a[i] << std::endl;
	}

	std::cout << "\nUPPERCASE TEST\n\n";

	char word[] = {'R', 'i', 'c', 'a', 'r', 'd', 'o', '!', '\0'};
	std::cout << "BEFORE: " << word << std::endl;

	iter(word, 8, upperCase);
	std::cout << "AFTER: " << word << std::endl;
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
