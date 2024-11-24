#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    // Array in stack
    int A[3][4] = {{1,2,3,4}, {2,4,6,8}, {1,3,5,7}};
    for(int i=0; i<3; i++)
    {
        for (int j=0; j<4; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }

    cout << "----------------------------------" << endl;

    // Array of pointer
        // Pointer in stack
        // Array in heap
    int *B[3];
    B[0] = (int *)malloc(4*sizeof(int));
    B[1] = (int *)malloc(4*sizeof(int));
    B[2] = (int *)malloc(4*sizeof(int));

    for(int i=0; i<3; i++)
    {
        for (int j=0; j<4; j++)
            printf("%d ", B[i][j]);
        printf("\n");
    }

    cout << "----------------------------------" << endl;

    // Double Pointers
        // Array of pointers in heap
    int **C;
    //C = (int **)malloc(4*sizeof(int *));
    C = new int *[3];
    C[0] = (int *)malloc(4*sizeof(int));
    C[1] = (int *)malloc(4*sizeof(int));
    C[2] = (int *)malloc(4*sizeof(int));

    for(int i=0; i<3; i++)
    {
        for (int j=0; j<4; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}
