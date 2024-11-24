#include <iostream>
#include <stdio.h>
using namespace std;


void InsertionSort(int A[], int n)
{
    // Passes
   for(int i = 1; i < n; i++)
   {
       int j = i-1;
       int x = A[i];

        // Comparisons
       while(j > -1 && A[j] > x)
       {
           A[j+1] = A[j];
           j--;
       }
       A[j+1] = x;
   }
}




int main()
{
    int A[]={11,13,7,12,16,9,24,5,10,3};
    int n = sizeof(A)/sizeof(A[0]);

    InsertionSort(A, n);

    for(int i=0; i < n; i++)
        printf("%d ", A[i]);

    return 0;
}

