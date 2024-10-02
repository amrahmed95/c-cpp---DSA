#include <iostream>

using namespace std;


void display()
{
    cout << "HELLO";
}


float add(float x, float y)
{
    float z;
    z = x + y;
    return z;
}


int maximum(int a , int b, int c)
{
    if ( a > b && a > c)
        return a;
    else if ( b > c)
        return b;
    else
        return c;
}



int main()
{
    cout << "display() function: ";
    display();
    cout << endl;

    float x=2.3, y=7.9, z;
    z= add(x,y);
    cout << "add function -- Z = " << z << endl;

    int max_number;
    max_number = maximum(x,y,z);
    cout << "maximum = " << max_number << endl;

    return 0;
}
