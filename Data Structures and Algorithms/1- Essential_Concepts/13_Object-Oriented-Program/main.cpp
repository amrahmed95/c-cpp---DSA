#include <iostream>
#include <stdio.h>
using namespace std;

class Rectangle
{
public:

    int length;
    int breadth;


    void initialize(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2*(length + breadth);
    }
};


int main()
{
    //Rectangle r = {0,0};
    Rectangle r;

    int l, b;
    printf("Enter Length and breadth: ");
    cin >> l >> b;

    r.initialize(l, b);

    int a = r.area();
    int peri = r.perimeter();

    printf("area = %d\nPerimeter = %d", a, peri);

    return 0;
}
