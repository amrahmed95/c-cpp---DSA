#include <iostream>
#include <climits>

using namespace std;

int main()
{

    int A[7] = {4,8,6,9,5,2,7};
    int sum = 0;

    for (int i = 0; i < 7; i++)
    {

    //  sum = sum + A[i]
        sum += A[i];

    }
    cout << "Sum = " << sum << endl;

    cout << "----------------------------------------------------------" << endl;

    int B[10]={2, 4, 6, 8, 12, 3, 5, 7, 9, 11};
    int max=INT_MIN;
    for(int i=0;i<=10;i++)
    {
        if(B[i] > max)
            max=B[i];
    }
    cout<< "Max = " << max << endl;

    cout << "----------------------------------------------------------" << endl;

    int C[10]={2,4,6,8,12,-3,5,7,9,11};
    int min=INT_MAX;
    for(int i=0;i<=10;i++)
    {
        if(C[i]< min)
            min=C[i];
    }
    cout<<"Min = " << min <<endl;

    return 0;
}
