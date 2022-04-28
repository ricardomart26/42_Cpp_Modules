#include "Array.hpp"
#include <string.h>

const int SIZE = 5;

int main( void ) 
{

	{
		std::cout << "Subject test\n";
		int * a = new int();
		std::cout << *a << std::endl;
	}

	Array<int>	emptyArr(0);
	Array<int>	arr(SIZE);
	int *IntArray = new int[SIZE]();

	std::cout << arr.size() << '\n';
	for (int i = 0; i < SIZE; i++)
		IntArray[i] = i;

	memcpy(arr.getArray(), IntArray, arr.size() * sizeof(int));

	Array<int> copy_arr(arr);

	Array<int> operator_arr;
	operator_arr = arr;


	for (int i = 0; i < SIZE; i++)
		std::cout << "BEFORE: int_array["<<i<<"]: " << IntArray[i] << std::endl;
	for (int i = 0; i < arr.size(); i++)
		std::cout << "BEFORE: my int_array["<<i<<"]: " << arr[i] << std::endl;
	for (int i = 0; i < copy_arr.size(); i++)
		std::cout << "BEFORE: copy int_array["<<i<<"]: " << copy_arr[i] << std::endl;
	for (int i = 0; i < copy_arr.size(); i++)
		std::cout << "BEFORE: operator int_array["<<i<<"]: " << operator_arr[i] << std::endl;

	std::cout << "\nTESTES: \n\n";
	try
	{
		std::cout << "Negative index: should throw exception\n";
		arr[-1] = 0;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		std::cout << "Size index: should throw exception\n";
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

	std::cout << "\nAFTER TEST: see if deep copy and operator is well done\n\n";
	for (int i = 0; i < SIZE; i++)
		std::cout << "AFTER: int_array["<<i<<"]: " << IntArray[i] << std::endl;
	for (int i = 0; i < arr.size(); i++)
		std::cout << "AFTER: my int_array["<<i<<"]: " << arr[i] << std::endl;
	for (int i = 0; i < copy_arr.size(); i++)
		std::cout << "AFTER: copy int_array["<<i<<"]: " << copy_arr[i] << std::endl;
	for (int i = 0; i < copy_arr.size(); i++)
		std::cout << "AFTER: operator int_array["<<i<<"]: " << operator_arr[i] << std::endl;

	delete[]	IntArray;
	return ( 0 );
}
