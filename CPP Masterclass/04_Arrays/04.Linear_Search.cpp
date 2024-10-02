#include <iostream>

using namespace std;

int main()
{

    // int A[] = {6, 11, 25, 8, 15, 7, 12, 20, 9, 14};
    // Key = 12 => Successful
    // Key = 35 => Unsuccessful

    int A[10] , Key, n = 10;

    cout << "Enter numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    cout << "Enter Key: ";
    cin >> Key;

    for (int i = 0; i < n; i++)
    {
        if (Key == A[i])
        {
            cout << "The key " << Key << " is Found at index " << i;
            return 0;
        }
    }

    // Array Finished then,
    cout << "Key is Not Found";

}
