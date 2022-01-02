#include "../includes/cpplib.h"

int	ft_len(std::string *src)
{
	int	size;

	size = 0;
	while (src[size] != '\0')
		size++;
	return (size);
}
