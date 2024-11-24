#include <iostream>
#include<stdio.h>
using namespace std;

// -------------------- START QUEUE -------------------
struct Node
{
    int data;
    struct Node *next;
}*front=NULL, *rear=NULL;

void enqueue(int x)
{
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));
    if(t==NULL)
        printf("Queue is Full\n");
    else
    {
        t->data = x;
        t->next = NULL;
        if(front == NULL)
            front=rear = t;
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue()
{
    int x = -1;
    struct Node *t;

    if(front==NULL)
        printf("Queue is Empty\n");
    else
    {
        x = front->data;
        t = front;
        front = front->next;
        free(t);
    }
    return x;
}

int isEmpty()
{
    return front==NULL;
}


// -------------------- END QUEUE -------------------


void BFS(int G[][7], int start, int n)
{
    int i = start;
    int visited[7] = {0};

    printf("%d ", i);
    visited[i] = 1;
    enqueue(i);
    while(!isEmpty())
    {
        i = dequeue();
        for(int v = 1; v<n; v++)
        {
            if(visited[v] == 0 && G[i][v] == 1)
            {
                printf("%d ", v);
                visited[v] = 1;
                enqueue(v);
            }
        }
    }
}


void DFS(int G[][7], int start, int n)
{
    static int visited[7] = {0};

    if(visited[start] == 0)
    {
        printf("%d ", start);
        visited[start] = 1;

        for(int v = 1; v<n; v++)
        {
            if(visited[v] == 0 && G[start][v] == 1)
                DFS(G, v , n);
        }
    }

}



int main()
{

    int G[7][7]={{0,0,0,0,0,0,0},
                 {0,0,1,1,0,0,0},
                 {0,1,0,0,1,0,0},
                 {0,1,0,0,1,0,0},
                 {0,0,1,1,0,1,1},
                 {0,0,0,0,1,0,0},
                 {0,0,0,0,1,0,0}};

    BFS(G, 5 , 7);

    cout << endl;

    DFS(G, 4 , 7);
    return 0;
}
