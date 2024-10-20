#include <iostream>
#include <stdio.h>

using namespace std;

int fun(int n)
{
    static int x = 0;

    if (n > 0)
    {
        x++;
        return fun(n-1) + x;
    }

    return 0;
}


int main()
{
    int a = 5;
    printf("%d ", fun(a));

    // fun(0) + 5 = 5
    // fun(1) + 5 = 10
    // fun(2) + 5 = 15
    // fun(3) + 5 = 20
    // fun(4) + 5 = 25
    // fun(5) = 25

    return 0;
}
