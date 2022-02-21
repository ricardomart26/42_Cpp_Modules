#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>

template <class T>
class easyfind
{
    public:
        // easyfind();
        easyfind(T type, int integer);
        ~easyfind();
        easyfind(const easyfind &copy);
        easyfind &operator = (const easyfind &rhs);
        class notfound : public std::exception
        {
            virtual const char *what() const throw();
        };

    private:
        T _cont;

};

// template <class T>
// easyfind<T>::easyfind()
// {

// };

template <class T>
easyfind<T>::easyfind(T type, int integer)
{
    for (int i = 0; i < type.size(); i++)
    {
        if (type[i] == integer)
            return;
    }
    throw notfound();
}

template <class T>
const char *easyfind<T>::notfound::what() const throw()
{
    return ( "Didn't find the number inside the array" );
}

// template <class T>
// easyfind<T>::easyfind(const easyfind<T> &rhs)
// {

// };


// template <class T>
// easyfind<T> &easyfind<T>::operator = (const easyfind<T> &rhs)
// {

// };

#endif
