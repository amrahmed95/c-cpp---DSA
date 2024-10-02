#include <iostream>
using namespace std;

int main()
{
    float r, area;
    cout << "Enter a radius";
    cin >> r;
//  area = 3.1425f * r * r;
    area = float(22/7) * r * r;
//  area = 22/7.0 * r * r;  // 154
    cout << "Area = " << area << endl;
    return 0;
}
