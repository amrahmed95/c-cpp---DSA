/*

n = 1724

n           remainder=n%10              n = n/10                reverse = reverse*10 + remainder
-------------------------------------------------------------------------------------------------
1724        1724%10 = 4      =>         1724/10 = 172           0*10 + 4   = 4
172         172%10  = 2      =>         172/10  = 17            4*10 + 2   = 42
17          17%10   = 7      =>         17/10   = 1             42*10 + 7  = 427
1           1%10    = 1      =>         1/10   = 0              427*10 + 1 = 4271
0


*/

#include <iostream>
using namespace std;

int main()
{
    int n,m, remainder, rev = 0;
    cout << "Enter a number: ";
    cin >> n;

    m = n;

    while(n > 0)
    {
        remainder = n%10;
        n = n/10;
        rev = rev*10 + remainder;

        // Display in Words
        switch(remainder)
        {
            case 1: cout << "one";
                break;
            case 2: cout << "Two";
                break;
            case 3: cout << "Three";
                break;
            case 4: cout << "Four";
                break;
            case 5: cout << "Five";
                break;
            case 6: cout << "Six";
                break;
            case 7: cout << "Seven";
                break;
            case 8: cout << "Eight";
                break;
            case 9: cout << "Nine";
                break;
            case 0: cout << "Zero";
                break;
        }

        cout << remainder << endl;
    }

    cout << "Original Number: " << m << endl;
    cout << "Reversed Number: " << rev << endl;

    return 0;
}
