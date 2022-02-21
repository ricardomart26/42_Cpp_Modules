#include "Data.hpp"

/**
 * @links:  
 * convert char[] to string - https://www.geeksforgeeks.org/convert-character-array-to-string-in-c/
 * 
 */

uintptr_t serialize(Data* ptr)
{
	uintptr_t ser = reinterpret_cast<uintptr_t>(ptr);
	return (ser);
}

Data* deserialize(uintptr_t raw)
{
	Data *ptr;

	ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}

int main(void)
{
	Data ptr;
	uintptr_t uptr;

	ptr.x = 1;
	ptr.y = 2;
	uptr = serialize(&ptr);
	Data *newptr = deserialize(uptr);

	std::cout << "x: " << newptr->x << " y: " << newptr->y << std::endl;
	// delete newptr;
	return (0);
}
