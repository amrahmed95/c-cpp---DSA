#include <iostream>
#include <stdio.h>

using namespace std;

void funB(int n);

void funA(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        funB(n-1);
    }
}

void funB(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        funA(n/2);
    }
}


int main()
{
    funA(20);   // 20 19 9 8 4 3 1

    return 0;
}
