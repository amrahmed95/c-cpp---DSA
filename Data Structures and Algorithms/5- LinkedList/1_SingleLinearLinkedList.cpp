#include<iostream>
#include<stdio.h>
using namespace std;


struct Node
{
    int data;
    struct Node *next;
}*first = NULL;

void createLinkedList(int A[], int n)
{
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first -> data = A[0];
    first -> next = NULL;
    last = first;

    for (int i=1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p)
{
    while(p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

void Rdisplay(struct Node *p)
{
    if(p != NULL)
    {
        printf("%d ", p->data);
        Rdisplay(p->next);
    }

}


int Count(struct Node *p)
{
    int l = 0;
    while(p != NULL)
    {
        l++;
        p=p->next;
    }
    return l;
}

int RCount(struct Node *p)
{
    if(p==0)
        return 0;
    return RCount(p->next)+1;
}

int sum(struct Node *p)
{
    int sum = 0;
    while(p != NULL)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
}

int RSum(struct Node *p)
{
    if(p==0)
        return 0;
    return RSum(p->next)+p->data;
}

int Max(struct Node *p)
{
    int max = INT32_MIN;
    while(p != NULL)
    {
        if(p->data > max)
            max = p->data;

        p = p->next;
    }
    return max;
}

int RMax(struct Node *p)
{
    int x = 0;
    if (p==0)
        return INT32_MIN;
    x = RMax(p->next);
    if(x > p->data)
        return x;
    else
        return p->data;
}

int Min(struct Node *p)
{
    int min = INT32_MAX;
    while(p != NULL)
    {
        if(p->data < min)
            min = p->data;

        p = p->next;
    }
    return min;
}

int Rmin(struct Node *p)
{
    int x = 0;
    if (p==0)
        return INT32_MAX;
    x = Rmin(p->next);
    if(x < p->data)
        return x;
    else
        return p->data;
}

int main()
{
    struct Node *temp;
    int A[] = {3,5,7,10,25,8,32,2};
    createLinkedList(A, 8);

    cout << "Display: " << endl;
    display(first);

    cout << endl << "--------------------------------------------" << endl;

    cout << "Recursion Display: " << endl;
    Rdisplay(first);

    cout << endl << "--------------------------------------------" << endl;


    printf("Count: %d\n", Count(first));
    printf("RCount: %d\n", RCount(first));

    cout << endl << "--------------------------------------------" << endl;

    printf("Sum: %d\n", sum(first));
    printf("RSum: %d\n", RSum(first));

    cout << endl << "--------------------------------------------" << endl;

    printf("Max: %d\n", Max(first));
    printf("RMax: %d\n", RMax(first));

    cout << endl << "--------------------------------------------" << endl;

    printf("Min: %d\n", Min(first));
    printf("RMin: %d\n", Rmin(first));

    return 0;
}

