#ifndef NODE_HPP
#define NODE_HPP

class Node
{
    public:

        Node();
        Node(int d);
        ~Node();
        Node &operator=(const Node &obj);

        void    push(int d);
        void    print();
        void    pop();
        void    peek();
        bool    isEmpty();

    private:

        int     _data;
        Node    *_next;

};

#endif