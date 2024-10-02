/*

n = 1724

n           remainder=n%10              n = n/10
----------------------------------------------------------------
1724        1724%10 = 4      =>           1724/10 = 172
172         172%10  = 2      =>           172/10  = 17
17          17%10   = 7      =>           17/10   = 1
1           1%10    = 1      =>            1/10   = 0
0

*/


#include <iostream>
using namespace std;

int main()
{
    int n, remainder;
    cout << "Enter a number: ";
    cin >> n;

    while(n > 0)
    {
        remainder = n%10;
        n = n/10;

        cout << remainder << endl;
    }


    return 0;
}
