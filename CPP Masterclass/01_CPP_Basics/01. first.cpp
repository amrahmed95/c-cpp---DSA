#include <iostream>

using namespace std;

//int main()
//{
//    cout << "Hello world!" << endl;
//    return 0;
//}

// -----------------------------------------------------------------

// TO Add Two Numbers

//int main()
//{
//    int a, b, c;
//    cout << "Enter 2 numbers: ";
//    cin >> a >> b;
//    c = a + b;
//    cout << "Sum is " << c << endl;
//}

// -----------------------------------------------------------------

// To take the string input and print it

int main()
{
    string name;
    cout << "May I have your name: ";
    getline(cin, name);
    cout << "Welcome " << name << endl;
    return 0;
}
