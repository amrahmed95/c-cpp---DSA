// sum = 1 + 2 + 3 + 4 + ... + n-1 + n
// sum = n * (n-1) / 2

#include <iostream>
using namespace std;

int main()
{
    int n, sum;
    cout << "Enter a number: ";
    cin >> n;
    sum = n * (n+1) / 2;
    cout << "sum = " << sum << endl;
    return 0;
}
