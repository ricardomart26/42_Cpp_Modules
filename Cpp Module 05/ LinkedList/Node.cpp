#include "Node.hpp"

#include <iostream>

/**
 * @default_constructor: Initializes _data variable to 0
 */
Node::Node()
{
    _data = 0;
    _next = nullptr;
}

Node::Node(int d)
{
    _data = d;
    _next = nullptr;
}

Node::~Node()
{
    delete this->_next;
}

Node &Node::operator=(const Node &obj)
{
    (void)obj;
    return (*this);
}

void    Node::push(int d)
{
    Node *newNode;
    Node *temp;
    
    newNode = new Node(d);
    temp = this;
    while (temp->_next != nullptr)
        temp = temp->_next;
    temp->_next = newNode;
}

void    Node::pop()
{
    Node *temp;

    this = this->_next;
}

void    Node::print()
{
    for (Node *temp = this; temp != nullptr; temp = temp->_next)
        std::cout << "This is the data: " << temp->_data << std::endl;    
}

