#include <iostream>
using namespace std;


class Base
{
public:
    Base(){cout << "Default of base - Non-param Base" << endl;}

    Base(int x){cout << "Param of Base " << x << endl;}
};


class Derived:public Base
{
public:
    Derived(){cout << "Default of Derived - Non-param Derived" << endl;}

    Derived(int x){cout << "Param of Derived " << x << endl;}

    Derived(int x, int y):Base(x)
    {
        cout << "Param of Derived: x= " << x << " y= " << y << endl;
    }
};



int main()
{

    // CALLING CONSTRUCTORS

    cout << "Derived d1 Constructor" << endl;
    Derived d1;
      //  Default of base - Non-param Base
      //  Default of Derived - Non-param Derived

    cout << "-----------------------------------------------" << endl;

    cout << "Derived d2(5) Constructor" << endl;

    Derived d2(5);
        //  Default of base - Non-param Base
        //  Param of Derived 5


    cout << "-----------------------------------------------" << endl;

    cout << "Derived d3(2,6) Constructor" << endl;

    Derived d3(2,6);
        // Param of Base 2
        // Param of Derived: x= 2 y= 6
    return 0;
}
