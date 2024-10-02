#include<iostream>
using namespace std;

int main()
{
    int x = 10;

    int &y = x;

    cout << "x = " << x << endl;    // 10

    x++;                            // 11

    y++;                            // 12

    cout << "x = " << x << endl;     // 12

    cout << "&X = " << &x << endl;  // 0x61ff08
    cout << "&y = " << &y << endl;  // 0x61ff08

    return 0;
}
