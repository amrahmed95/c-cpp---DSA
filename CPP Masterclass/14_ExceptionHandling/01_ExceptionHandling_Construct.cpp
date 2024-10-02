#include <iostream>

using namespace std;

int division(int x, int y)
{
    if (y == 0)
        throw 101;
    else
        return x/y;
}


int main()
{
    try
    {
        int c = division(6,0);
        cout << c << endl;
    }

    catch(int e)
    {
        cout << "Division by zero " << e << endl;
    }


}
