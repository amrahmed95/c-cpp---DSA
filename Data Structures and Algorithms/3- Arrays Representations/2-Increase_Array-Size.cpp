#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int *p , *q;

    p = (int *)malloc(5*sizeof(int));
    p[0]=3;
    p[1]=5;
    p[2]=7;
    p[3]=9;
    p[4]=11;

    q = (int *)malloc(10*sizeof(int));

    // Copying content of P into q
    for(int i = 0; i < 5; i++)
        q[i] = p[i];


    cout << "P-pointer: " << endl;
    for(int i=0; i<5; i++)
        printf("%d ", p[i]);

    cout << endl << "--------------------" << endl;

    cout << "q-pointer: " << endl;
    for(int i=0; i<5; i++)
        printf("%d ", q[i]);

    cout << endl << "-----Now p-pointer to the new array and deleting q-pointer------------" << endl;

    //delete []p;
    free(p);
    p = q;
    q = NULL;

    cout << "P-pointer: " << endl;
    for(int i=0; i<10; i++)
        printf("%d ", p[i]);

    cout << endl << "--------------------" << endl;

    cout << "q-pointer: " << endl;
    for(int i=0; i<10; i++)
        printf("%d ", q[i]);

    return 0;
}
