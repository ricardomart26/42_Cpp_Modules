#include "Span.hpp"

int *create_array(size_t size)
{
    int *ret = new int[size]();

    for (size_t i = 0; i < size; i++)
        ret[i] = i;

    return (ret);
}

int main( void )
{
    #if 0
    {
        std::cout << "\n\nTESTE: Funciona\n\n";
                
        Span test(20);

        test.addNumber(23);
        test.addNumber(4);
        test.addNumber(1);
        test.addNumber(51);
        test.addNumber(-55);
        test.addNumber(12);
        test.addNumber(125);
        test.addNumber(42);
        test.addNumber(12);
        test.addNumber(-2);
        test.addNumber(INT_MIN);
        test.addNumber(INT_MAX);
        std::cout << "Longest span: " << test.longestSpan() << std::endl;
        std::cout << "Shortest span: " << test.shortestSpan() << std::endl;
    
    }
    #endif
    #if 0
    {
        std::cout << "\n\nTESTE: Sem numeros suficientes para verificar span\n\n";
        
        Span test(20);
        std::cout << test.shortestSpan() << std::endl;
    }
    #endif
    #if 0
    {
        std::cout << "\n\nTESTE: Sem numeros suficientes para verificar span\n\n";
        Span test(20);
        test.addNumber(3);
        std::cout << test.longestSpan() << std::endl;        
    }
    #endif
    #if 0
    {
        std::cout << "\n\nTESTE: Ultrapassar o Size\n\n";
    
        Span test(10);
        test.addNumber(23);
        test.addNumber(4);
        test.addNumber(1);
        test.addNumber(51);
        test.addNumber(-55);
        test.addNumber(12);
        test.addNumber(125);
        test.addNumber(42);
        test.addNumber(12);
        test.addNumber(-55);
        std::cout << "size: " << test.size() << std::endl;
        test.addNumber(0);
        std::cout << test.longestSpan() << std::endl;
        std::cout << test.shortestSpan() << std::endl;
    }
    #endif
    #if 0
    {
        std::cout << "\n\nTESTE: Ultrapassar o Size e poucos elem's para encontrar diferença\n\n";
        Span test(0);
        test.addNumber(23);

        std::cout << test.longestSpan() << std::endl;
        std::cout << test.shortestSpan() << std::endl;
    }
    #endif
    #if 0

    {
        std::cout << "\n\nTESTE: No diff\n\n";
        Span test(10);
        test.addNumber(0);
        test.addNumber(0);
        test.addNumber(0);
        test.addNumber(0);
        test.addNumber(0);
        test.addNumber(0);
        test.addNumber(0);
        std::cout << "size of arr: " << test.size() << std::endl;
        int *arr_test = create_array(10);
        std::cout << test.longestSpan() << std::endl;
        std::cout << test.shortestSpan() << std::endl;
    }
    #endif
    #if 0
    {
        std::cout << "\n\nTESTE: No diff e passou o tamanho do array\n\n";

        Span test(10);
        test.addNumber(0);
        test.addNumber(0);
        test.addNumber(0);
        test.addNumber(0);
        test.addNumber(0);
        test.addNumber(0);
        test.addNumber(0);
        std::cout << "size of arr: " << test.size() << std::endl;
        int *arr_test = create_array(10);

        test.range_add(arr_test, arr_test + 4, 2);
        std::cout << test.longestSpan() << std::endl;
        std::cout << test.shortestSpan() << std::endl;
    }
    #endif
    #if 0

    {
        std::cout << "\n\nTESTE: See range_add and if it works\n\n";
        Span test(11);
        test.addNumber(0);
        test.addNumber(0);
        test.addNumber(0);
        test.addNumber(0);
        test.addNumber(0);
        test.addNumber(0);
        test.addNumber(0);
        std::cout << "size of arr: " << test.size() << std::endl;
        int *arr_test = create_array(10);
        test.range_add(arr_test, arr_test + 4, 0);

        std::cout << test.longestSpan() << std::endl;
        std::cout << test.shortestSpan() << std::endl;
    }
    #endif
    #if 1

    {
        std::cout << "\n\nTESTE: No diff\n\n";

        Span test(10);
        test.addNumber(0);
        test.addNumber(0);
        test.addNumber(0);
        test.addNumber(0);
        test.addNumber(0);
        test.addNumber(0);
        test.addNumber(0);
        std::cout << "size of arr: " << test.size() << std::endl;
        int *arr_test = create_array(10);

        test.range_add(arr_test, arr_test + 4, 20);
        std::cout << test.longestSpan() << std::endl;
        std::cout << test.shortestSpan() << std::endl;

    }

    #endif
    #if 1

    {
        std::cout << "\n\nTESTE: Ultrapassar o Size\n\n";
    
        Span test(10);
        int *arr_test = create_array(10);
        test.range_add(arr_test + 8, arr_test + 9, 0);
        std::cout << test.longestSpan() << std::endl;
        std::cout << test.shortestSpan() << std::endl;    
    }
    #endif
    return ( 0 );
}
