#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int a = 10;

    int *p = &a;

    cout << "a = " << a << endl;
    cout << "p = " << p << endl;
    cout << "a (using pointer) = " << *p << endl;   // De-Referencing

    cout << "---------------- Pointer to an array In Stack----------------" << endl;

    int A[] = {2,4,6,8,10};
    int *p2 = A;
    for (int i=0; i<5; i++)
    {
       //cout << A[i] << endl;
       cout << p2[i] << endl;
    }


    cout << "---------------- Pointer to an array In Heap ----------------" << endl;

    int *p3;
    p3 = (int *)malloc(5 * sizeof(int));
    // p3 = new int[5]

    p3[0] = 10;
    p3[1] = 15;
    p3[2] = 14;
    p3[3] = 21;
    p3[4] = 31;

    for (int i=0; i<5; i++)
    {
       cout << p3[i] << endl;
    }


    delete []p3;    // Deallocating memory in C++
    free(p);        // Deallocating memory in C

    return 0;
}
