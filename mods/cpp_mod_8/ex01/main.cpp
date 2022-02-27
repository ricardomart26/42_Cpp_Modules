#include "Span.hpp"

int main( void )
{
    Span test(10);

    // test.addNumber(23);
    // test.addNumber(4);
    // test.addNumber(1);
    // test.addNumber(51);
    // test.addNumber(-55);
    // test.addNumber(12);
    // test.addNumber(125);
    // // test.addNumber(3);
    // test.addNumber(42);
    // test.addNumber(12);
    // // Passou o size de 10
    // test.addNumber(-55);
    // test.addNumber(-2);
    std::cout << test.longestSpan() << std::endl;
    std::cout << test.shortestSpan() << std::endl;
    return ( 0 );
}
