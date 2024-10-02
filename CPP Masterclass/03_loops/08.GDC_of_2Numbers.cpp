#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter 2 Numbers";
    cin >> n >> m;

    while(m != n)
    {
        if (m > n)
            m = m-n;
        else
            n = n-m;
    }

       cout << "Greatest Common Devisor (GDC): " << m;

    return 0;
}
