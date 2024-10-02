#include <iostream>

using namespace std;

class Rectangle
{
    public:
        int length;
        int breadth;

        int area()
        {
            return length*breadth;
        }

        int perimeter()
        {
            return 2*(length+breadth);
        }
};

int main()
{
    // Accessing an Object Using a pointer

    Rectangle r1;
    Rectangle *ptr;
    ptr = &r1;

    ptr -> length = 10;
    ptr -> breadth = 5;
    cout << "Area using Pointer : "      << ptr -> area() << endl;
    cout << "Perimeter using Pointer : " << ptr -> perimeter() << endl;


    // Creating an object in a Heap
    Rectangle *p = new Rectangle;
    p -> length = 10;
    p -> breadth = 5;
    cout << "Area using Pointer [HEAP] : "      << p -> area() << endl;
    cout << "Perimeter using Pointer [HEAP] : " << p -> perimeter() << endl;



    return 0;
}
