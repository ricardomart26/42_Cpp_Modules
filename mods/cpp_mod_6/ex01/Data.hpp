#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <string>
#include <iomanip>

// struct Data 
// {
// 	int x;
// 	int y;
// };


class Data 
{

    public:

    Data();
    Data(const std::string &name, int age);
    Data(const Data &copy);
    Data &operator=(const Data &rhs);

    std::string getName(void) const;
    int getAge(void) const;

    private:
        std::string _name;
        int _age;

};


#endif
