#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <cmath>

class Span 
{
    public:

        Span(unsigned int n);
        Span(const Span &copy);
        ~Span();
        Span    &operator=(const Span &rhs);
        void    addNumber(int number);
        unsigned int    shortestSpan();
        unsigned int    longestSpan();
        int             size() const;
        void            range_add(int *begin, int *end, unsigned int position);

        class noSpaceInArray : public std::exception
        {
            const char *what() const throw();
        };

        class needsMoreElem : public std::exception
        {
            const char *what() const throw();
        };

        class noDiff : public std::exception
        {
            const char *what() const throw();
        };

    private:

        unsigned int _n;
        int *_arr;
        unsigned int _size;
};

#endif
