#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int *p = &a;

    cout << "a : "<< a << endl;     // 10
    cout << "&a : "<< &a << endl;   // Address of a
    cout << "p: "<< p << endl;      // p = Address of a
    cout << "&p: "<< &p << endl;    // Address of p
    cout << "*p: "<< *p  << endl;   // De-referencing - a - 10 (Data where p is pointing)


    return 0;
}
