#include<iostream>
using namespace std;

int main()
{
    int A[5] = {2,4,6,8,10};
    int *p = A;
    int *q = &A[4];

    cout << "*p : " << *p << endl;    // 2

    p++;
    cout << "p++ : " << *p << endl;    // 4


    p--;
    cout << "p-- : " << *p << endl;    // 2


    cout << "P: " << p << endl;     // Address of A[0]
    cout << "p+2: " << p+2 << endl; // Address of A[2]

    cout << "*P: " << *p << endl;           // 2
    cout << "*(p+2): " << *(p+2) << endl;   // 6

    cout << "q: " << q << endl;     // Address of A[4]
    cout << "*q: " << *q << endl;   // 10

    // p = A[2] = 6
    // q = A[4] = 10
    cout << "q - p : " << q-p << endl;  // 4
    cout << "p - q : " << p-q << endl;  // -4 => The 2nd pointer (q) is far away and the first pointer (p) is in the beginning



    return 0;
}
