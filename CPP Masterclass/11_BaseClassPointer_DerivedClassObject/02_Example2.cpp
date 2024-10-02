#include <iostream>
using namespace std;

class Rectangle
{
public:
    void area(){cout << "Area of Rectangle class" << endl;}
};


class Cuboid: public Rectangle
{
public:
    void volume(){cout << "Vol of Cuboid class" << endl;}
};

int main()
{
    Cuboid c;
    Rectangle *p = &c;

    p -> area();
    // p -> volume() [NOT ALLOWED]

    return 0;
}
