#include <iostream>

using namespace std;

int main()
{
    int A[5] = {2,4,6,8,10};

    int *p;
    p = (int *)malloc(5*sizeof(int));
    p[0]=3;
    p[1]=5;
    p[2]=7;
    p[3]=9;
    p[4]=11;

    cout << "Static Array A: " << endl;
    for(int i = 0; i < 5; i++)
        printf("%d ", A[i]);

    cout << endl << "----------------------------------------" << endl;

    cout << "Dynamic Array inside heap: " << endl;
    for(int i = 0; i < 5; i++)
        printf("%d ", p[i]);

    delete []p;

    return 0;
}
