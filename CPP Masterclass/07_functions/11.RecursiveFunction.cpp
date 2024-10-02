#include <iostream>
using namespace std;

fun(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        fun(n-1);
    }
}


int main()
{
    int x = 5;
    fun(5);
}
