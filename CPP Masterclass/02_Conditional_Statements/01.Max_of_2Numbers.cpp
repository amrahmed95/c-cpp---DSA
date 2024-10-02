#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "Enter 2 Numbers: ";
    cin >> x >> y;

    if (x > y){
        cout << "The max is " << x;
    }
    else{
        cout << "The max is " << y;
    }

    return 0;
}
