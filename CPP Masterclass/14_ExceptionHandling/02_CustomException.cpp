#include <iostream>
using namespace std;

class CustomException:public exception
{

};


int division(int x, int y) throw(CustomException)
{
    if (y==0)
        throw CustomException();
    else
        return x/y;
}

int main()
{
    int x = 10, y = 0, z;

    try
    {
        if (y == 0)
            throw CustomException();
        z = x/y;
        cout << z << endl;
    }
    catch(CustomException e)
    {
        cout << "MY Custom Exception" << endl;
    }
    catch(int e)
    {
        cout << "Int Exception" << endl;
    }
    catch(...)
    {
        cout << "All Catch" << endl;
    }


    return 0;
}
