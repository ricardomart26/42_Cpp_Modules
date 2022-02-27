#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
const int MAX_SIZE = 500;

template <class T>
class MutantStack
{

    public:
        MutantStack();
        ~MutantStack();
        
        // Member functions
        bool    empty() const;
        size_t  size();
        T       &top();
        void    push(T insert);
        void    pop();
        void    swap(MutantStack &rhs);
        void    emplace(T &emplace);
        
        class   MaxOut : std::exception
        {
            const char *what() const throw();
        };
        class   NoElem : std::exception
        {
            const char *what() const throw();
        };

    private:
        size_t  _numberOfElem;
        T       _arr[MAX_SIZE];
};

template <class T>
MutantStack<T>::MutantStack() : _numberOfElem( 0 )
{

}

template <class T>
MutantStack<T>::~MutantStack()
{

}

template <class T>
bool    MutantStack<T>::empty() const
{
    if ( _numberOfElem == 0 )
        return ( false );
    return ( true );
}

template <class T>
void    MutantStack<T>::push(T insert)
{
    try {
        if ( _numberOfElem > MAX_SIZE )
            throw (MaxOut());            
        _arr[ _numberOfElem ] = insert;
        _numberOfElem++; 
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

template <class T>
T   &MutantStack<T>::top()
{
    return ( _arr[_numberOfElem - 1] );
}

template <class T>
size_t  MutantStack<T>::size()
{
    return ( _numberOfElem );
}

template <class T>
void    MutantStack<T>::pop()
{
    try {
        if (numberOfElem == 0)
            throw (NoElem());
        _numberOfElem--;
        _arr[_numberOfElem] = 0;
    } catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}

template <class T>
const char *MutantStack<T>::MaxOut::what() const throw()
{
    return ( "Max out space in stack (500)" );
}

template <class T>
const char *MutantStack<T>::NoElem::what() const throw()
{
    return ( "Max out space in stack (500)" );
}

#endif
