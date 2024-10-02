#include <iostream>
using namespace std;

int main()
{
    int i=5,j;
    j=i++;
    cout<<j<<" "<<i<<endl;  // 5 6

    int k=5,l;
    l=++k;
    cout<<l<<" "<<k<<endl;  // 6  6

    int a=5,b;
    b=2*++a + 2*a++;        // d = 2*6 + 2*7
    cout<<b<<" "<<a<<endl;  // 26 7

    int c=5,d;
    d=2*c++ + 2*c++;        // d = 2*5 + 2*6
    cout<<d<<" "<<c<<endl;  // 22 7

    return 0;
}


