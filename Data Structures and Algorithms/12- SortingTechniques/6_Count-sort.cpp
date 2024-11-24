#include<iostream>
#include<stdio.h>
#include<limits.h>

using namespace std;

int findMax(int A[], int n)
{
    int max = INT32_MIN;
    for(int i = 0; i < n; i++)
    {
        if(A[i] > max)
            max = A[i];
    }
    return max;
}


void CountSort(int A[], int n)
{
    int i, j, max, *c;

    max = findMax(A, n);
    c = new int[max + 1];

    for(int i = 0; i < max+1; i++)
        c[i] = 0;

    for(int i = 0; i < n; i++)
        c[A[i]]++;


    i = 0;
    j = 0;

    while(i < max+1)
    {
        if(c[i] > 0)
        {
            A[j++] = i;
            c[i]--;
        }
        i++;
    }

    delete[] c; // Free the allocated memory
}

int main()
{
    int A[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3};
    int n = sizeof(A) / sizeof(A[0]);

    CountSort(A, n);

    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);

    printf("\n");

    return 0;
}
