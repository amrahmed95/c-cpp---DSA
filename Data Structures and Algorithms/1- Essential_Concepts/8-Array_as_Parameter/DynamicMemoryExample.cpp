#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int * fun(int size)
{
    int *p;
    p = (int *)malloc(sizeof(int));

    for(int i = 0; i < size; i++)
        p[i] = i+1;

    return p;
}

// Dynamic Memory Example


int main()
{
    int *ptr ,sz;

    cout << "Enter size of Array you want: ";
    cin >> sz;

    ptr = fun(sz);

    for(int i = 0; i < sz; i++)
        cout << ptr[i] << endl;;
    return 0;
}
