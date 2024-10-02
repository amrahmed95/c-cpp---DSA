#include <iostream>
using namespace std;
int main()
{
    char a=128;
    cout <<"a " <<(int)a<<endl; // -128

    char b=127;
    b++;
    cout <<"b " <<(int)b<<endl; // -128

    char c=-129;
    cout <<"c " <<(int)c<<endl; // 127

    char d=-128;
    d--;
    cout <<"d " <<(int)d<<endl; // 127

    int e=INT_MAX;
    e++;
    cout <<"e " <<(int)e<<endl;

return 0;
}


