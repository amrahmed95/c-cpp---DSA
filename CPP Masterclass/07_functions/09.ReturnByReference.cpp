#include <iostream>
using namespace std;


int& fun(int &a)
{
    cout << "a = " << a << endl;    // 10

    return a;
}


int main()
{
    int x = 10;

    fun(x) = 25;

    cout << "x = " << x << endl;    // 25

    return 0;
}
