#ifndef SPAN_HPP
#define SPAN_HPP

class Span 
{

    public:
        Span(int n);
        Span(const Span &copy);
        ~Span();
        Span    &operator = (const Span &rhs);
        void    addNumber(int number);
        void    shortestSpan();
        void    longestSpan();

    private:
        int _n;
        int *_arr;
        int _maxSize;
};

#endif