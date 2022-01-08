#include <iostream>

class A
{
   public:
       int a;
       int b;

       A(int a, int b) { this->a = a; this->b = b; };
};

int main() 
{
   A* a = new A[5](3, 4);

}