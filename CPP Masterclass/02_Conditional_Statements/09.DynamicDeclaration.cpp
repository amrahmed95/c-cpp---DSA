#include <iostream>
using namespace std;

int main()
{
    int a=10, b=5;

    if (true)
    {
        int c = a+b;
        // c var will be only in stack within the if block
        cout << "c " << c << endl;
    }
    // cout << "c " << c << endl; [ERROR - Use of undeclared variable]

   // -------------------------------------------------------------------

    int d = a-b;
    if (true)
    {
        cout << "d " << d << endl;
    }
    // cout << "d " << d << endl; [NOT ERROR]

   // -------------------------------------------------------------------

    if (int e=a*b)
    {
        cout << "e " << e << endl;
    }
   // cout << "e " << e << endl; [ERROR - Use of undeclared variable]

    return 0;
}
