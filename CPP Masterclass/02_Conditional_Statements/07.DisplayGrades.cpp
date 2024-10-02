#include <iostream>
using namespace std;

typedef int marks;


int main()
{
    marks m1, m2, m3, total;

    float avg;

    cout << "Enter marks of students: ";
    cin >> m1 >> m2 >> m3;

    total = m1 + m2 + m3;
    avg = total / 3.0;

    if (avg >= 60)
        cout << "Grade A" << endl;
    else if (avg >= 35 && avg < 60 )
        cout << "Grade B" << endl;
    else
        cout << "Grade C" << endl;

    return 0;

}
