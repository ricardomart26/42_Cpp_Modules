#include "Span.hpp"

int main( void )
{
    {
        std::cout << "\n\nTESTE: Funciona\n\n";
        try {
            
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
            // test.addNumber(-55);
            test.addNumber(-2);
            test.addNumber(INT_MIN);
            test.addNumber(INT_MAX);
            std::cout << "Longest span: " << test.longestSpan() << std::endl;
            std::cout << "Shortest span: " << test.shortestSpan() << std::endl;
        
        } catch (const std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }

    {
        std::cout << "\n\nTESTE: Sem numeros suficientes para verificar span\n\n";
        try {
        
            Span test(20);
            std::cout << test.shortestSpan() << std::endl;
        
        } catch (const std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }

    {
        std::cout << "\n\nTESTE: Sem numeros suficientes para verificar span\n\n";
        try {
        
            Span test(20);
            test.addNumber(3);
            std::cout << test.longestSpan() << std::endl;
        
        } catch (const std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }

    {
        std::cout << "\n\nTESTE: Ultrapassar o Size\n\n";
        try {
    
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
            test.addNumber(-2);
            std::cout << test.longestSpan() << std::endl;
            std::cout << test.shortestSpan() << std::endl;
    
        } catch (const std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }


    {
        std::cout << "\n\nTESTE: Ultrapassar o Size\n\n";
        try {
    
            Span test(0);
            test.addNumber(23);
  
            std::cout << test.longestSpan() << std::endl;
            std::cout << test.shortestSpan() << std::endl;
    
        } catch (const std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }

    {
        std::cout << "\n\nTESTE: No diff\n\n";
        try {
    
            Span test(10);
            test.addNumber(0);
            test.addNumber(0);
            test.addNumber(0);
            test.addNumber(0);
            test.addNumber(0);
            test.addNumber(0);
            test.addNumber(0);
            std::cout << "size of arr: " << test.size() << std::endl;
            int *arr_test = new int[10]();

            for (int i = 0; i < 10; i++)
                arr_test[i] = i;

            test.range_add(arr_test + 1, arr_test + 4, 2);
            std::cout << test.longestSpan() << std::endl;
            std::cout << test.shortestSpan() << std::endl;
    
        } catch (const std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }

    {
        std::cout << "\n\nTESTE: Ultrapassar o Size\n\n";
        try {
    
            Span test(10);
            test.addNumber(0);
            std::cout << test.longestSpan() << std::endl;
            std::cout << test.shortestSpan() << std::endl;
    
        } catch (const std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    return ( 0 );
}
