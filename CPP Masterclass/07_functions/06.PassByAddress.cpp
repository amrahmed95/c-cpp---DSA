
#include <iostream>
using namespace std;


void swap(int *a, int *b)
{
    int temp;

    temp = *a;

    *a = *b;

    *b = temp;
}


int main()
{
    int x = 10, y = 20;

    cout << "BEFORE Swap " << endl;
    cout << "X = " << x << " y = " << y << endl << endl; // 10 20

    swap(&x,&y);

    cout << "AFTER Swap " << endl;
    cout << "X = " << x << " y = " << y; // 10 20

    return 0;
}
