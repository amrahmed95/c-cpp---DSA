#include <iostream>
using namespace std;


void fun1()
{
    int s = 10;
    s++;
    cout << s << endl;
}

void fun2()
{
    static int s = 10;
    s++;
    cout << s << endl;
}


int main()
{
    fun1();  // 11
    fun1();  // 11
    fun1();  // 11

    cout << endl;

    fun2();  // 11
    fun2();  // 12
    fun2();  // 13
    return 0;
}
