#include <iostream>
using namespace std;


class Rectangle
{
private:
    int length;
    int breadth;
public:
    int getLength(){return length;}
    int getBreadth(){return breadth;}

    void setLength(int l)
    {
        if (l > 0)
            length=l;
        else
            length = 1;
    }

    void setBreadth(int b)
    {
        if (b > 0)
            breadth=b;
        else
            breadth = 1;
    }

    int area(){return length*breadth;}
    int perimeter(){return 2*(length+breadth);}
};




int main()
{
    Rectangle r1;
    // r1.length = 10; X (PRIVATE - NOT ACCESSABLE)
    // r1.breadth = 5; X (PRIVATE - NOT ACCESSABLE)
    r1.setLength(-10);
    r1.setBreadth(5);

    cout << r1.area() << endl;

    return 0;
}
