#include <iostream>
#include <stdio.h>
using namespace std;


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void BubbleSort(int A[], int n)
{
    int flag;

    // Passes
    for(int i=0; i < n-1; i++)
    {
        flag = 0;
        // comparisons
        for(int j=0; j < n-1-i; j++)
        {
            if(A[j] > A[j+1])
            {
                swap(&A[j], &A[j+1]);
                flag = 1;
            }
        }

        if(flag==0)
            break;
    }
}




int main()
{
    int A[]={11,13,7,12,16,9,24,5,10,3};
    int n = sizeof(A)/sizeof(A[0]);

    BubbleSort(A, n);

    for(int i=0; i < n; i++)
        printf("%d ", A[i]);

    return 0;
}
