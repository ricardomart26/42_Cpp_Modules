#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
#include <array>
#include <iostream>

// class numberNotFound : public std::exception
// {
//     const char *what() const throw();
// };

template <typename T>
void    easyfind(T arr, int wanted)
{
    int lp = 0; // left position
    int rp = arr.size() - 1;
    int half_size = arr.size() / 2;
    
    std::sort(arr.begin(), arr.end());
    try {
        while (rp >= lp)
        {
            if (arr[half_size] == wanted)
                return ;
            else if (arr[half_size] > wanted)
                rp = half_size - 1;
            else if (arr[half_size] < wanted)
                lp = half_size + 1;
            half_size = (rp + lp) / 2;
        }
        throw 1;
    } catch (...) {
        std::cout << "No number " << wanted << " in array\n";
    }
}

// template <class T>
// class easyfind
// {
//     public:
//         // easyfind();
//         easyfind(T type, int integer);
//         ~easyfind();
//         easyfind(const easyfind &copy);
//         easyfind &operator = (const easyfind &rhs);
//         class notfound : public std::exception
//         {
//             virtual const char *what() const throw();
//         };

//     private:
//         T _cont;

// };

// // template <class T>
// // easyfind<T>::easyfind()
// // {

// // };

// template <class T>
// easyfind<T>::easyfind(T type, int integer)
// {
//     for (int i = 0; i < type.size(); i++)
//     {
//         if (type[i] == integer)
//             return;
//     }
//     throw notfound();
// }

// template <class T>
// const char *easyfind<T>::notfound::what() const throw()
// {
//     return ( "Didn't find the number inside the array" );
// }

// // template <class T>
// // easyfind<T>::easyfind(const easyfind<T> &rhs)
// // {

// // };


// // template <class T>
// // easyfind<T> &easyfind<T>::operator = (const easyfind<T> &rhs)
// // {

// // };

#endif
