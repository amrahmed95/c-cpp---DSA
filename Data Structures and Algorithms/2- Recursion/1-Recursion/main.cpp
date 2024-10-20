#include <iostream>
#include <stdio.h>

using namespace std;

void fun1(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        fun1(n-1);
    }
}

void fun2(int n)
{
    if (n > 0)
    {
        fun2(n-1);
        printf("%d ", n);
    }
}

int main()
{
    int x = 3;
    cout << "Fun1: ";
    fun1(x);    // 3 2 1

    cout << endl << endl;

    cout << "Fun2: ";
    fun2(x);    // 1 2 3

    return 0;
}
