#include "Span.hpp"

Span::Span(unsigned int n) : _n(n), _size(0)
{
    _arr = new int[n]();
}

Span::Span(const Span &copy)
{
    _n = copy._n;
    _size = copy._size;
    _arr = new int[ _n];
    for (size_t i = 0; i < _size; i++)
        _arr[i] = copy._arr[i];
}

Span::~Span()
{
    delete _arr;
}

Span   &Span::operator=(const Span &rhs)
{
    if (this == &rhs)
        return (*this);
    if (_arr)
        delete _arr;
    _n = rhs._n;
    _size = rhs._size;
    _arr = new int[_n];
    for (size_t i = 0; i < _size; i++)
        _arr[i] = rhs._arr[i];
    return ( *this );
}

void    Span::addNumber(int number)
{
    if (_size >= _n)
        throw noSpaceInArray();
    _arr[_size] = number;
    _size++;
}

size_t abs_diff(int a, int b)
{
    return (a > b ? a - b : b - a);
}

unsigned int    Span::shortestSpan()
{
    if (_size < 2)
        throw needsMoreElem();
    size_t diff = SIZE_MAX;
    for (size_t i = 0; i < _size; i++)
    {
        for (size_t  x = i + 1; x < _size; x++)
        {
            if (_arr[i] == _arr[x])
                continue ; 
            if (diff > abs_diff(_arr[i], _arr[x]))
                diff = abs_diff(_arr[i], _arr[x]);
            if (diff == 1)
                return (diff);
        }
    }
    if (diff == 0)
        throw noDiff();
    return (diff);
}

unsigned int    Span::longestSpan()
{
    if (_size < 2)
        throw needsMoreElem();
    int min = _arr[0];
    int max = _arr[0];
    for (size_t i = 1; i < _size; i++)
    {
        if (_arr[i] > max)
            max = _arr[i];
        else if (_arr[i] < min)
            min = _arr[i];
    }
    if (max - min == 0)
        throw noDiff();
    return (max - min);
}

void    Span::range_add(int *begin, int *end, unsigned int position)
{
    unsigned int diff = end - begin;
    if (position >= _size)
        std::cout << "Position not available inside array\n";
    if (diff + _size > _n)
        throw noSpaceInArray();
    
    if (position == _size - 1)
    {
        while (begin != end)
        {
            addNumber(*begin);
            begin++;
        }
        _size += diff;
        return ;
    }

    _size += diff;
    for (unsigned int i = position; begin != end; i++)
    {
        int temp = _arr[i];
        _arr[i + diff] = temp;
        _arr[i] = *begin;
        begin++;
    }
}

int     Span::size() const
{
    return _size;
}

const char *Span::noSpaceInArray::what() const throw()
{
    return ("Exception: Exceeded Array capacity");
}

const char *Span::noDiff::what() const throw()
{
    return ("Exception: No diff of numbers in array");
}

const char *Span::needsMoreElem::what() const throw()
{
    return ("Exception: Needs more elements to find longest/smallest Span");
}
