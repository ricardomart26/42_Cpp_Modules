#include "easyfind.hpp"
#include <array>

int main( void )
{
    std::array<int, 6> arr = {1, 2, 3, 4, 5, 6};

    easyfind(arr, 9);
    easyfind(arr, 0);
    easyfind(arr, -2);
    easyfind(arr, 3);
    easyfind(arr, 4);
    easyfind(arr, 6);
    easyfind(arr, 1);
    easyfind(arr, 2);

    return ( 0 );
}
