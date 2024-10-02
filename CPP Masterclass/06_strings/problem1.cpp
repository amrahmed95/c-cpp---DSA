#include <iostream>
#include<string>

using namespace std;

int main()
{
    string str = "Welcome";

    cout << "Length = " << str.length() << endl;

    int count = 0;

    for (int i = 0; str[i] != '\0' ; i++)
    {

        count++;
    }


    cout << "Length = " << count << endl;


    return 0;
}
