#include <iostream>

using namespace std;

class Base
{
public:
    void display()
    {
        cout << "Display of Base" << endl;
    }
};

class Derived:public Base
{
public:
    void display()
    {
        cout << "Display of Derived" << endl;
    }
};

int main()
{

    Derived d;
    d.display();        // "Display of Derived"

    d.Base::display();  // "Display of Base"

    return 0;
}
