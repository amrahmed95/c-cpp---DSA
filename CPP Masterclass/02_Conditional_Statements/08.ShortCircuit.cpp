#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 5, i = 5;

    if (a > b && ++i <= b)
    {
    }
    cout << "When (a > b && ++i <= b) , i = "  << i << endl;  // 6

    // --------------------------------------------------------------------------


    a = 10, b = 5, i = 5;


    if (a < b && ++i <= b)
    {
    }
    cout << "When (a < b && ++i <= b) , i = "  << i << endl;  // 5


    return 0;
}
