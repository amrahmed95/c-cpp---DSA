#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size of elements: ";
    cin >> size;

    // Fixed Array [ in Stack ]

    // int A[size];
    // cout << sizeof A << endl;
    // size = 35    (not allowed)
    // ------------------------------------------------------

    // To implement dynamic-sized Array [ in Heap ]

    int *p = new int[size];


    cout << "Enter new size";
    cin >> size;

    delete []p;
    p = new int[size];

    return 0;
}
