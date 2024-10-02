#include <iostream>
using namespace std;

class Parent
{
private:    int a;
protected:  int b;
public:     int c;
    void funParent()
    {
        a = 10;
        b = 5;
        c = 15;
    }
};


class Child: protected Parent
{
    /*
    [INHERIT FROM PARENT]
protected:
     int b;
     int c;
     void funParent()
     */
public:
    void funChild()
    {
        // a = 10; (Private - NO ACCESS)
        b = 5;
        c = 15;
    }
};



class Grandchild: public Child
{
public:
    void funGrandchild()
    {
        // a = 10; (Private - NO ACCESS)
        b = 5;
        c = 15;
    }
};

int main()
{
    // Child c;
    // c.a = 10;
    // c.b = 5;
    // c.c = 20;
    return 0;
}
