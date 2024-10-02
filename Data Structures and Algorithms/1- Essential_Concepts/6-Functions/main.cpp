#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int add(int a, int b)
{
    int c;
    c = a+b;
    return c;
}


int main()
{
    int x,y,sum;
    x = 10;
    y = 5;
    sum = add(x,y);
    printf("Sum = %d", sum);

    return 0;
}
