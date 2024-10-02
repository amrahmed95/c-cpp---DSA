#include <iostream>
#include <stdlib.h>
#include <stdio.h>


struct Rectangle
{
    int length;
    int breadth;
};

using namespace std;

int main()
{
    cout << "------------------- Object in Stack -------------------" << endl;

    struct Rectangle r1 = {20,10};
    struct Rectangle *p1 = &r1;

    cout << "Length of r1 =  " << p1->length << "  and Breadth of r1 = " << p1->breadth << endl;
    cout << "Length of r1 =  " << r1.length << "  and Breadth of r1 = " << r1.breadth << endl;

    cout << "------------------- Object in Heap -------------------" << endl;

    struct Rectangle r2;
    struct Rectangle *p2 = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p2->length = 15;
    p2->breadth = 7;

    cout << "Length of r2 =  " << p2->length << "  and Breadth of r2 = " << p2->breadth << endl;
    cout << "Length of r2 =  " << r2.length << "  and Breadth of r2 = " << r2.breadth << endl;

    return 0;
}
