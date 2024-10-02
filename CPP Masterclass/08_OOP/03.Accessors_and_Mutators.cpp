#include <iostream>

using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;

    public:
        void setLength(int l)
        {
            if (l < 0)
                length = 1;
            else
                length = l;
        }

        void setBreath(int b)
        {
            if (b < 0)
                breadth = 1;
            else
                breadth = b;

        }

        int getLength()
        {
            return length;
        }

        int getBreadth()
        {
            return breadth;
        }


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
    Rectangle r1;
    r1.setLength(10);
    r1.setBreath(5);
    cout << "r1 Length: "    << r1.getLength()  << endl;
    cout << "r1 Breadth: "   << r1.getBreadth() << endl;
    cout << "r1 Area: "      << r1.area()       << endl;
    cout << "r1 Perimeter: " << r1.perimeter()  << endl;

    cout << "---------------------------" << endl;

    Rectangle r2;
    r2.setLength(10);
    r2.setBreath(-5);
    cout << "r2 Length: "    << r2.getLength()  << endl;
    cout << "r2 Breadth: "   << r2.getBreadth() << endl;
    cout << "r2 Area: "      << r2.area()       << endl;
    cout << "r2 Perimeter: " << r2.perimeter()  << endl;

    return 0;
}
