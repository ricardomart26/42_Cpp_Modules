#include "MutantStack.hpp"
#include <list>

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

// int main( void )
// {
//     std::stack<int> stk;
//     stk.push(20);
//     stk.push(40);
//     std::cout << stk.top() << std::endl;
//     stk.pop();
//     stk.pop();
//     stk.pop();
//     // std::cout << stk.top() << std::endl;
// }

// int main ()
// {
//   std::deque<int> mydeque (3,100);          // deque with 3 elements
//   std::vector<int> myvector (2,200);        // vector with 2 elements

//   std::stack<int> first;                    // empty stack
//   std::stack<int> second (mydeque);         // stack initialized to copy of deque

//   std::stack<int,std::vector<int> > third;  // empty stack using vector
//   std::stack<int,std::vector<int> > fourth (myvector);

//   MutantStack<int> first_mu;                    // empty MutantStack
//   MutantStack<int> second_mu (mydeque);         // MutantStack initialized to copy of deque

//   MutantStack<int,std::vector<int> > third_mu;  // empty MutantStack using vector
//   MutantStack<int,std::vector<int> > fourth_mu (myvector);

//   std::cout << "size of first: " << first.size() << '\n';
//   std::cout << "size of second: " << second.size() << '\n';
//   std::cout << "size of third: " << third.size() << '\n';
//   std::cout << "size of fourth: " << fourth.size() << '\n';


//   std::cout << "size of first: " << first_mu.size() << '\n';
//   std::cout << "size of second: " << second_mu.size() << '\n';
//   std::cout << "size of third: " << third_mu.size() << '\n';
//   std::cout << "size of fourth: " << fourth_mu.size() << '\n';

//   return 0;
// }

int main()
{
    MutantStack<int>    mstack;
    std::list<int>    lstack;

    mstack.push(5);
    lstack.push_back(5);
    mstack.push(17);
    lstack.push_back(17);
    std::cout << "STACK: " << mstack.top() << std::endl;
    std::cout << "LIST: " << lstack.back() << std::endl;

    mstack.pop();
    lstack.pop_back();
    std::cout << "STACK: " << mstack.size() << std::endl;
    std::cout << "LIST: " << lstack.size() << std::endl;
    
    mstack.push(3);
    lstack.push_back(3);
    mstack.push(5);
    lstack.push_back(5);
    mstack.push(737);
    lstack.push_back(737);
    
    MutantStack<int>::iterator it = mstack.begin();
    ++it;
    --it;
    std::cout << std::endl;
    while(it != mstack.end())
    {
        std::cout << "STACK: " << *it << std::endl;
        ++it;
    }
    
    std::list<int>::iterator it_l = lstack.begin();
    ++it_l;
    --it_l;
    std::cout << std::endl;
    while(it_l != lstack.end())
    {
        std::cout << "LIST: " << *it_l << std::endl;
        ++it_l;
    }
    std::stack<int> s(mstack);
    std::list<int> l(lstack);
    
    return 0;

}

