#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int a = 10;

    int &r = a;

    cout << "a = " << a << endl;

    cout << "r = " << r << endl;

    return 0;
}
