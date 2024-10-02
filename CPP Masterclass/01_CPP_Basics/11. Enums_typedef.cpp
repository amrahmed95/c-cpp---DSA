#include <iostream>
using namespace std;


// Enum => Constants -  User defined DataType
// Enum => To define a set of Constants under a user-defined datatype

enum day {Mon, Tue, Wed, Thu = 9, Fri, Sat, Sun};

//#define Mon 0
//const int Mon = 0

enum dept {CS = 1, IT, ECE, civil};


// ------------------------------------------------------------------------------------

typedef int marks;

// ------------------------------------------------------------------------------------

int main()
{

    day d;
    d = Mon;
    cout << d << endl; // 0
    d = Tue;
    cout << d << endl; // 1

    cout << Fri << endl;    // 10


    dept d = cs;

    marks m1, m2;   // m1, m2 is of type marks (which is int)

    return 0;
}
