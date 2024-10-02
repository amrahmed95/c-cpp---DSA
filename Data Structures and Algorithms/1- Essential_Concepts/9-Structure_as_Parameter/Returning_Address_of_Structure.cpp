#include <iostream>
#include <stdio.h>

// Create a structure in the heap inside fun() and return its address


using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

struct Rectangle * fun()
{
    struct Rectangle *ptr;
    ptr = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    // ptr = new Rectangle  (CPP)

    ptr -> length = 15;
    ptr -> breadth = 7;

    return ptr;
}


int main()
{
    struct Rectangle *p = fun();
    cout << "Length " << p->length << endl << "Breadth " << p->breadth << endl;

    return 0;
}
