#include "Node.hpp"

int main(void)
{
    Node *head = new Node(3);
    head->push(6);
    head->print();
    // O suposto é ficar 3 . 6
    head->push(1);
    head->print();
    head->pop();
    delete head;
}