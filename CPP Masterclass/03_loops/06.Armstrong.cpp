/*

n = 1724

n           remainder=n%10              n = n/10
----------------------------------------------------------------
1724        1724%10 = 4      =>           1724/10 = 172
172         172%10  = 2      =>           172/10  = 17
17          17%10   = 7      =>           17/10   = 1
1           1%10    = 1      =>            1/10   = 0
0


if (4^3 + 2^3 + 7^3 + 1^3 == 1724) => ArmStrong


*/


#include <iostream>
using namespace std;

int main()
{
    int n, remainder, sum=0, ;
    cout << "Enter a number: ";
    cin >> n;

    m = n;  // Because n will be updated to be zero at the end

    while(n > 0)
    {
        remainder = n%10;
        n = n/10;
        sum = sum + remainder*remainder*remainder;
        cout << remainder << endl;
    }

    if (sum == m)
        cout << "Armstrong Number" << endl;
    else
        cout << "Not a Armstrong Number" << endl;

    return 0;
}
