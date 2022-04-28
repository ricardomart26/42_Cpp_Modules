#include "easyfind.hpp"
#include <array>

int main( void )
{
    std::array<int, 6> arr = {1, 2, 3, 4, 5, 6};
    try {
        easyfind(arr, 9);
    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    
    try {
        easyfind(arr, 0);
    } catch (const std::exception &e) {
       std::cout << e.what() << std::endl;
    }

    try {
        easyfind(arr, -2);
    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }

        try {
        easyfind(arr, 3);
    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        easyfind(arr, 4);
    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        easyfind(arr, 6);
    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        easyfind(arr, 1);
    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        easyfind(arr, 2);
    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return ( 0 );
}
