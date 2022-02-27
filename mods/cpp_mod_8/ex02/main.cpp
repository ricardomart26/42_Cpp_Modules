#include <stack>
#include "MutantStack.hpp"
// int main()
// {
//     MutantStack<int>    mstack;

//     mstack.push(5);
//     mstack.push(17);
//     std::cout << mstack.top() << std::endl;

//     mstack.pop();
//     std::cout << mstack.size() << std::endl;

//     mstack.push(3);
//     mstack.push(5);
//     mstack.push(737);
//     //[...]mstack.push(0);
//     MutantStack<int>::iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();
//     ++it;
//     --it;
//     while(it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }
//     std::stack<int> s(mstack);
//     return ( 0 );
// }

// Stack testes
// int main( void )
// {
//     MutantStack<int> stk;

//     std::cout << stk.empty() << "\n";
//     stk.push(49);
//     std::cout << stk.empty() << "\n";
//     // stk.push(1);
//     std::cout << stk.top() << std::endl; 
// }

int main( void )
{
    std::stack<int> stk;
    stk.push(20);
    stk.push(40);
    std::cout << stk.top() << std::endl;
    stk.pop();
    stk.pop();
    stk.pop();
    // std::cout << stk.top() << std::endl;
}
