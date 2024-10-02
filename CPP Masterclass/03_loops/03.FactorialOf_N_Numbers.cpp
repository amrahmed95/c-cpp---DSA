/*
    n! = 1*2*3*4*5*....*n
*/


#include <iostream>
using namespace std;

int main()
{
    int i, n, fact=1;
    cout << "Enter n: ";
    cin >> n;

    for(i=1; i<=n; i++)
    {
        fact = fact*i;

    }
    cout << "factorial of " << n << " = " << fact << endl;

    return 0;
}
