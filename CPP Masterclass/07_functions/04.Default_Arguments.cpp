#include <iostream>

using namespace std;


int sum(int a, int b, int c = 0)
{
    return a + b;
}

int maximum(int a, int b, int c = 0)
{
    return a>b && a>c ? a : (b>c ? b : c);
}


int main()
{

    cout << sum(10,5) << endl;

    cout << sum(12, 13, 14) << endl;

    cout << maximum(0,10,16) << endl;

    cout << maximum(10,13,12) << endl;

    return 0;
}
