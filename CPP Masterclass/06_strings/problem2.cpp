#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "WeLcOmE59";

    string::iterator it;

    for (it = str.begin(); it != str.end(); it++)
    {
        if (*it >= 65 && *it <= 90)
        {
            *it = *it + 32;
        }

    }

    cout << str << endl;

    return 0;
}
