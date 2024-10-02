#include <iostream>

using namespace std;


template <class T>
T maximum(T x, T y)
{
    if (x > y)
        return x;
    else
        return y;

    // x > y ? x : y
}



int main()
{
    int c = maximum(10,5);
    double d = maximum(12.2, 4.6);
    float f = maximum(10.5f, 6.9f);

    cout << "C = " << c << endl;

    cout << "D= " << d << endl;

    cout << "F= " << f << endl;

    return 0;
}

