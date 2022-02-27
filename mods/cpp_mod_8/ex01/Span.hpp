#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <cmath>

class Span 
{

    public:
        Span(int n);
        Span(const Span &copy);
        ~Span();
        Span    &operator = (const Span &rhs);
        void    addNumber(int number);
        int    shortestSpan();
        int    longestSpan();

        class noSpaceInArray : public std::exception
        {
            const char *what() const throw();
        };
        class needsMoreElem : public std::exception
        {
            const char *what() const throw();
        };

    private:
        int _n;
        int *_arr;
        int _maxSize;
};

#endif
