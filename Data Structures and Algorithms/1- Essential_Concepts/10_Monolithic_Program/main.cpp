#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int length = 0, breadth = 0;

    printf("Enter Length and breadth: ");
    cin >> length >> breadth;

    int area = length * breadth;
    int perimeter = 2*(length+breadth);

    printf("area = %d\nPerimeter = %d", area, perimeter);

    return 0;
}
