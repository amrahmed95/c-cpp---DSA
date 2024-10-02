#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int A[5];
    A[0] = 12;
    A[1] = 15;
    A[2] = 25;

    cout << sizeof(A) << " bytes" << endl;
    cout << A[1] << endl;
    printf("%d\n", A[2]);

    cout << "---------------------------------------" << endl;

    int B[] = {2,4,6,8,10,12,14};
    cout << sizeof(B) << " bytes" << endl;
    cout << B[1] << endl;
    printf("%d\n", B[2]);

    cout << "---------------------------------------" << endl;

    int c[10] = {1,3,5,7};

    for (int i=0; i<10; i++)
    {
        cout << c[i] << endl;
    }

    cout << "---------------------------------------" << endl;

    // For-each loop

    for(int x: B)
    {
        cout << x << endl;
    }

     cout << "---------------------------------------" << endl;

     int n;
     cout << "Enter size of an array: ";
     cin >> n;

     int d[n];


    return 0;
}
