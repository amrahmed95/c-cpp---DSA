#include <iostream>
using namespace std;


class Car
{
public:
    /*
    virtual void start()
    {
        cout << "Car Started" << endl;
    }
    */

    virtual void start() = 0;

};


class Innova:public Car
{
public:
    void start()
    {
        cout << "Innova Car Started" << endl;
    }
};

class Swift:public Car
{
public:
    void start()
    {
        cout << "Swift Car Started" << endl;
    }
};


int main()
{
    Car *p = new Innova();
    p -> start();

    p = new Swift();
    p -> start();


    // Car c;   [ Can not create an object from an abstract class ]

    return 0;
}
