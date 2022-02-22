#include "easyfind.hpp"
#include <array>

int main( void )
{
    std::array<int, 6> arr = {1, 2, 3, 4, 5, 6};
    std::cout << easyfind(arr, 9) << std::endl;
    return ( 0 );
}
