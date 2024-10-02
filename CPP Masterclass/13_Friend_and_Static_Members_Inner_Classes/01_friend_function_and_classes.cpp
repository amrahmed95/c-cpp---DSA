#include <iostream>

using namespace std;

class Derived;
class test
{
private: int a;
protected: int b;
public:
    int c;
    friend void fun();  // friend function
    friend Derived;     // friend class
};

void fun()
{
    test t;
    t.a = 10;
    t.b = 15;
    t.c = 5;
}

class Derived
{
public:
    test t2;

    void fun()
    {
        t2.a =10;
        t2.b = 15;
        t2.c = 5;
    }

};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
