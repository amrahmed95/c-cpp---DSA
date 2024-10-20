#include <iostream>
#include <stdio.h>

using namespace std;

int fun(int n)
{
    if (n > 0)
    {
        return fun(n-1) + n;
    }

    return 0;
}


int main()
{
    int a = 5;
    printf("%d ", fun(a));

    // fun(0) + 1 = 1
    // fun(1) + 2 = 3
    // fun(2) + 3 = 6
    // fun(3) + 4 = 10
    // fun(4) + 5 = 15
    // fun(5) = 15

    return 0;
}
