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
    Rectangle r1, r2;
    r1.length = 10;
    r1.breadth = 5;
    cout << "Area r1 = " << r1.area() << endl;
    cout << "Perimeter r1 = " << r1.perimeter() << endl;

    cout << endl;

    r2.length = 15;
    r2.breadth = 10;
    cout << "Area r2 = " << r2.area() << endl;
    cout << "Perimeter r2 = " << r2.perimeter() << endl;

    return 0;
}
