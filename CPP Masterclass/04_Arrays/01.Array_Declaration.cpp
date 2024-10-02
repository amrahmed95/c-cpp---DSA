#include <iostream>

using namespace std;

int main()
{
    int A[] = {2,4,6,8,10,12};

    float B[] = {2.5f, 5.6f, 9, 8, 7};

    char C[] = {'A', 66, 'C', 68};

    // For each loop

    // * For each x in A * //

    for(int x: A)
        cout << x << endl;

    cout << "----------------------------" << endl;

    for (float y: B)
        cout << y << endl;

    cout << "----------------------------" << endl;

    for (auto x: B)
        cout << x << endl;

    cout << "----------------------------" << endl;

    for (auto x: C)
        cout << x << endl;  // A B C D  (ASCII)


    return 0;


}
