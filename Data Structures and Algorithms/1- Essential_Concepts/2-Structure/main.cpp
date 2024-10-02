#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
} r3, r4, r5;           // r3, r4, r5 is a global struct

struct Rectangle r2;    // r2 is a global struct

int main()
{
    struct Rectangle r1 = {10,5};
    cout << r1.length << endl;
    cout << r1.breadth << endl;

    printf("Area of Rectangle r1 = %d \n", r1.length*r1.breadth);

    printf("Size of struct Rec = %d", sizeof(r1));

    return 0;
}
