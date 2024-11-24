#include<iostream>
#include<stdio.h>
#include<limits.h> // Include this for INT32_MAX

using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partitioning(int A[], int l, int h)
{
    int i = l;
    int j = h;
    int pivot = A[l];

    do
    {
        do { i++; } while (i <= h && A[i] <= pivot);
        do { j--; } while (j >= l && A[j] > pivot);
        if (i < j)
            swap(&A[i], &A[j]);

    } while (i < j);

    swap(&A[l], &A[j]);
    return j;
}

void QuickSort(int A[], int l, int h)
{
    int j;
    if (l < h)
    {
        j = partitioning(A, l, h);
        QuickSort(A, l, j - 1); // Corrected the upper bound for the left side
        QuickSort(A, j + 1, h); // Corrected the lower bound for the right side
    }
}

int main()
{
    int A[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3, INT32_MAX};
    int n = sizeof(A) / sizeof(A[0]) - 1; // Adjusted to exclude INT32_MAX

    QuickSort(A, 0, n);

    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);

    return 0;
}
