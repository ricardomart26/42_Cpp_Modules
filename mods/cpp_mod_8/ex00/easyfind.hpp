#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
#include <array>
#include <iostream>
#include <algorithm>

class notFound : public std::exception
{
    const char *what() const throw();
};

template <typename T>
void    easyfind(T arr, int wanted)
{
    try {
        if (std::find(arr.begin(), arr.end(), wanted) != arr.end())
            std::cout << "Found number: " << wanted << "\n";
        else
            throw notFound();
    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

const char *notFound::what() const throw()
{
    return ("Exception: Didnt't find number");
}

#endif
