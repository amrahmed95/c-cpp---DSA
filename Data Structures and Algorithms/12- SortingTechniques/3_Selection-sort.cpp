#include<iostream>
#include<stdio.h>

using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}


void SelectionSort(int A[], int n)
{
    int j, k;
    // Passes
    for (int i = 0; i < n-1; i++)
    {
        // Swaps
        for (j=k=i; j < n; j++)
        {
            if (A[j] < A[k])
                k = j;
        }
        swap(&A[i], &A[k]);
    }
}


int main()
{
    int A[]={11,13,7,12,16,9,24,5,10,3};
    int n = sizeof(A)/sizeof(A[0]);

    SelectionSort(A, n);

    for(int i=0; i < n; i++)
        printf("%d ", A[i]);

    return 0;
}
