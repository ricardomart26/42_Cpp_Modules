#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <class T>
class MutantStack : public std::stack<T>
{
    public:

        typedef typename std::stack<T>::container_type::iterator iterator;

        MutantStack();
        MutantStack(const MutantStack &ms);
        MutantStack& operator=(const MutantStack &rhs);
        ~MutantStack();
        
        iterator begin(void);
        iterator end(void);

};

template <typename T>
MutantStack<T>::MutantStack()
{

}

template <typename T>
MutantStack<T>::~MutantStack()
{

}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &copy)
{
    *this = copy;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &rhs)
{
    std::stack<T>::operator=(rhs);
    return (*this);
}


template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
    return std::stack<T>::c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
    return std::stack<T>::c.end();
}




#endif
