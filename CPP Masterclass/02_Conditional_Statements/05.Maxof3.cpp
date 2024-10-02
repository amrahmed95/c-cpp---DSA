#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;

    if (a > b && a > c)
        cout << "The max is " << a;
    else if (b > c)
        cout << "The max is " << b;
    else
        cout << "The max is " << c;

    return 0;
}
