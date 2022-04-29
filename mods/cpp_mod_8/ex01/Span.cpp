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
    try {
        if (_size >= _n)
            throw noSpaceInArray();
        _arr[_size] = number;
        _size++;
    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

size_t abs_diff(int a, int b)
{
    return (a > b ? a - b : b - a);
}

unsigned int    Span::shortestSpan()
{
    try {
        int counter = 0;
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
                {
                    counter++;
                    diff = abs_diff(_arr[i], _arr[x]);
                }
                if (diff == 1)
                    return (diff);
            }
        }
        if (counter == 0)
            diff = 0;
        if (diff == 0)
            throw noDiff();
        return (diff);
    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
        return (0);
    }
}

unsigned int    Span::longestSpan()
{
    try {
        if (_size < 2)
            throw needsMoreElem();
        int min = _arr[0];
        int max = _arr[0];
        std::cout << _arr[0] << std::endl;
        for (size_t i = 1; i < _size; i++)
        {
            if (_arr[i] > max)
                max = _arr[i];
            else if (_arr[i] < min)
                min = _arr[i];
            std::cout << _arr[i] << std::endl;
        }
        if (max - min == 0)
            throw noDiff();
        return (max - min);
    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
        return (0);
    }
}

void    Span::range_add(int *begin, int *end, unsigned int position)
{
    try {
        if (end < begin)
            throw ("Exception: Pointers begin or end not inside any array");
        if (position > _size)
            throw ("Exception: Position not available");
        unsigned int diff = (end - begin) + 1;
        if (diff + _size > _n)
            throw noSpaceInArray();
   
        if (position == _size - 1)
        {
            while (begin != end)
                addNumber(*(begin++));
            _size += diff;
            return ;
        }
        _size += diff;
        for (unsigned int i = position; begin != end + 1; i++)
        {
            int temp = _arr[i];
            _arr[i + diff] = temp;
            _arr[i] = *begin;
            begin++;
        }
    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    } catch (const char *err) {
        std::cout << err << std::endl;
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
