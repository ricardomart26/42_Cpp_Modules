#include "Array.hpp"
#include <string.h>

const int SIZE = 5;

int main( void ) 
{
	Array<int>	emptyArr(0);
	Array<int>	arr(SIZE);
	int *myIntArray = new int[SIZE];
	// std::copy(std::begin(arr.getArray()), std::end(arr.getArray()), std::begin(myIntArray));

	std::cout << arr.getSize() << '\n';
	memcpy(myIntArray, arr.getArray(), arr.getSize() * 4);
	for (int i = 0; i < SIZE; i++)
		std::cout << "my int array["<<i<<"]: " << myIntArray[i] << std::endl;
	for (int i = 0; i < arr.getSize(); i++)
		std::cout << arr[i] << std::endl;
	for (int i = 0; i < arr.getSize(); i++)
		arr[i] = i;

	try
	{
		arr[-1] = 0;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		arr[SIZE] = 0;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		arr[SIZE - 1] = 42;
		std::cout << arr[SIZE - 1] << '\n';
		// emptyArr[0] = 42; // Deve dar erro
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	for (int i = 0; i < SIZE; i++)
		std::cout << myIntArray[i] << std::endl;

	delete[]	myIntArray;
	return ( 0 );
}
