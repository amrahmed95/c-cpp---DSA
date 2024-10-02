#include <iostream>

using namespace std;

int main()
{

    // int A[] = {6, 11, 25, 8, 15, 7, 12, 20, 9, 14};
    // Key = 12 => Successful
    // Key = 35 => Unsuccessful

    int A[10] = {6, 7, 8, 9, 11, 12, 14, 15, 20, 25};
    int key, low=0, high=9, mid;

    cout << "Enter Key: ";
    cin >> key;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == A[mid])
        {
            cout << "Found at " << mid;
            return 0;
        }
        else if (key < A[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    cout << "Not Found";
}
