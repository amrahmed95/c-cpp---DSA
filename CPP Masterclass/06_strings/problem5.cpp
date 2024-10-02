#include <iostream>>
#include <string>

using namespace std;

int main()
{
    string str = "john123@gmail.com";

    string username = "";

//    str.find('@');    Index=7

    cout << "UserName: " << str.substr(0, str.find('@'));   // john123


    return 0;
}
