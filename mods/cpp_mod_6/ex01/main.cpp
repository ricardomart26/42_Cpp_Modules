#include "Data.hpp"

/**
 * @links:  
 * convert char[] to string - https://www.geeksforgeeks.org/convert-character-array-to-string-in-c/
 * 
 */

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}


int main(void)
{
	Data newone("Ricardo", 02);
	uintptr_t uptr_s = serialize(&newone);

	Data *newone_ptr = deserialize(uptr_s);
	std::cout << "name: " << newone_ptr->getName() << " age: " << newone_ptr->getAge() << std::endl;

	return (0);
}
