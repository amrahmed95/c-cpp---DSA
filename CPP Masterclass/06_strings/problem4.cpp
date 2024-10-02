#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "MADAM";
    string rev ="";

    int len = str.length();

    rev.resize(len);

    for (int i = 0, j = len-1; i<len; i++,j--)
    {
        rev[i] = str[j];
    }

    rev[len] = '\0';

    cout << rev << endl;

    if (str.compare(rev) == 0)
        cout << "palindorme" << endl;
    else
        cout << "Not a palindorme" << endl;


    return 0;
}
