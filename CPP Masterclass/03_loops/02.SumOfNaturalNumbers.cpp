/*
    n(n+1) / 2

    1+2+3+4+5+6+7+8+9 = 45

    n=9

    i   sum+i

    1   0+1=1
    2   1+2=3
    3   3+3=6
    4   6+4=10
    5   10+5=15
    6   15+6=21
    7   21+7=28
    8   28+8=36
    9   36+9=45

*/

#include <iostream>
using namespace std;

int main()
{
    int i, n, sum=0;

    cout << "Enter n: ";
    cin >> n;

    for (i=1; i<=n; i++)
    {
        //sum = sum + i;
        sum += i;
    }
    cout << "Sum = " << sum << endl;

    return 0;
}
