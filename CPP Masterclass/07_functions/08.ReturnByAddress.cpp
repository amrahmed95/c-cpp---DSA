#include <iostream>>
using namespace std;


int* fun(int size)
{
    int *p = new int[size];

    for (int i=0; i < size; i++)
        p[i] = i*5;

    return p;
}



int main()
{
    int *ptr = fun(5);
    cout << "Address of ptr" << ptr << endl;

    for (int i=0; i < 5; i++)
        cout << ptr[i] << " ";

    cout << endl;

    cout << "Content of ptr : " << *ptr << endl;

    return 0;
}
