#include "easyfind.hpp"
#include <array>

int main( void )
{
    std::array<int, 5> arr = {0, 1, 2, 3, 4};
    easyfind<std::array<int, 5>>valor(arr, 3);

    return ( 0 );
}
