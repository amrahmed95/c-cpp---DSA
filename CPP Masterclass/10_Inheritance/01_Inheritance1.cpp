#include <iostream>

using namespace std;

class Base
{
public:
    int a;
    void display()
    {
        cout << "Display of Base" << endl;
        cout << "Display of Derived" << a<< endl;
    }
};


class Derived:public Base
{
public:

    void show()
    {
        cout << "Display of Derived" << endl;

    }
};



int main()
{

    Base b;
    b.display();

    Derived d;
    d.a = 100;
    d.display();
    d.show();

    return 0;
}
