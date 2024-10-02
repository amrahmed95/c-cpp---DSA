#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int add(int a, int b)
{
    a++;
    cout << "a = " << a << endl;
    return 0;
}

int main()
{
    int x = 10, y = 20, sum;

    sum = add(x,y);

    cout << "x = " << x << endl;

    // printf("Sum = %d", sum);

    return 0;
}
