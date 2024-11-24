#include<iostream>
#include<stdio.h>

using namespace std;

void merge(int A[], int l, int mid, int h)
{
   int i, j, k;
   i = l;
   j = mid+1;
   k = l;

   int B[h+1];

   while(i <= mid && j <= h)
   {
       if(A[i] < A[j])
        B[k++] = A[i++];
       else
        B[k++] = A[j++];
   }

    for(; i<=mid; i++)
    B[k++] = A[i];

    for(; j<=h; j++)
    B[k++] = A[j];

    for(i = l; i <= h; i++)
        A[i] = B[i];

    delete[] B;
}

// Iterative Merge Sort
void IMergeSort(int A[], int n)
{
    int pass, l, mid, h, i;

    for(pass=2; pass <= n ; pass = pass*2)
    {
        for(i = 0; i+pass-1<n; i=i+pass)
        {
            l = i;
            h = i+pass-1;
            mid = (l+h)/2;
            merge(A, l, mid, h);
        }
    }
    if(pass/2 < n)
        merge(A, 0, (pass/2) - 1 , n-1);
}


// Recursive Merge Sort
void RMergeSort(int A[], int l, int h)
{
  int mid;
  if(l < h)
  {
      mid = (l+h) / 2;
      RMergeSort(A, l, mid);
      RMergeSort(A, mid+1, h);
      merge(A, l, mid, h);
  }
}

int main()
{
    int A[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3};
    int n = sizeof(A) / sizeof(A[0]);

    IMergeSort(A, n);

    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);

    printf("\n");


    RMergeSort(A, 0, n-1);

    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);

    return 0;
}
