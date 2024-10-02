// Calculate Rectangle Area

/*  Algorithm Area
  BEGIN
    Print "Enter base and Height (b,h)
    Read b,h
    area = (b*h)/2
    print "Area is" area
  END

*/

#include <iostream>
using namespace std;

int main()
{
    float b,h,a;
    cout<< "Enter base and height of the rectangle: ";
    cin >> b >> h;
    a = (b*h) / 2;
    cout << "Area = " << a;
    return 0;
}
