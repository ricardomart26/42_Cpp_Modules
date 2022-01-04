#include <iostream>
#include <exception>

class OverSpeed : public std::exception
{
    public:

        const char *what()
        {
            return ("Check out car speed\nYou are in a car, not in a plane\n");
        }
        void    get_speed()
        {
            std::cout << "Your car speed is " << _speed << std::endl;
        }

        void    set_speed(int speed)
        {
            _speed = speed;
        }

    private:

        int _speed;

};

class Car
{

    public:

        Car() : _speed(0) {}

        void accelarate()
        {
            for (;;)
            {
                _speed += 10;
                std::cout << "speed is " << _speed << std::endl;
                if (_speed >= 250)
                {
                    OverSpeed s;
                    s.set_speed(_speed);
                    throw s;
                } 
            }
        }

    private:

        int _speed;

};

int main()
{
    Car my_car;

    try 
    {
        my_car.accelarate();
    } 
    catch (OverSpeed s) 
    {
        std::cout << s.what() << std::endl;
        s.get_speed();
    }

    return (0);
}