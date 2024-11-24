#include <iostream>
#include <stdio.h>

using namespace std;


/* ------------------------ START Queue ------------------------*/
struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
};

struct Queue
{
    int size;
    int front;
    int rear;
    struct Node **Q;
};

void create(struct Queue *q, int size);
void enqueue(struct Queue *q, struct Node *x);
struct Node *dequeue(struct Queue *q);
int isEmpty(struct Queue q);
void freeQueue(struct Queue *q);



void create(struct Queue *q, int size)
{
    q->size = size;
    q->front = q->rear = 0;
    q->Q = (struct Node **)malloc(q->size * sizeof(struct Node *));
    if (!q->Q) {
        printf("Memory allocation failed for queue\n");
        exit(1);
    }
}

void enqueue(struct Queue *q, struct Node *x)
{
    if ((q->rear + 1) % q->size == q->front) {
        printf("Queue is Full\n");
        return; // Early return if queue is full
    } else {
        q->rear = (q->rear + 1) % q->size;
        q->Q[q->rear] = x;
    }
}

struct Node *dequeue(struct Queue *q)
{
    struct Node *x = NULL;
    if (q->front == q->rear) {
        printf("Queue is Empty\n");
        return NULL; // Return NULL if queue is empty
    } else {
        q->front = (q->front + 1) % q->size;
        x = q->Q[q->front];
    }
    return x;
}

int isEmpty(struct Queue q)
{
    return q.front == q.rear;
}

void freeQueue(struct Queue *q) {
    free(q->Q);
}

/* ------------------------ END Queue ------------------------*/

struct Node *root = NULL;

void TreeCreate()
{
    struct Node *p, *t;
    int x;
    struct Queue q;
    create(&q, 100);

    printf("Enter root value: ");
    scanf("%d", &x);
    root = (struct Node *)malloc(sizeof(struct Node));
    root->data = x;
    root->lchild = NULL;
    root->rchild = NULL;
    enqueue(&q, root);

    while (!isEmpty(q))
    {
        p = dequeue(&q);
        printf("Enter left child of %d(-1 for no child): ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(&q, t);
        }
        printf("Enter right child of %d(-1 for no child): ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(&q, t);
        }
    }

    freeQueue(&q); // Free the queue memory
}

void preorder(struct Node *p)
{
    if (p)
    {
        printf("%d ", p->data);
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

void Inorder(struct Node *p)
{
    if (p)
    {
        Inorder(p->lchild);
        printf("%d ", p->data);
        Inorder(p->rchild);
    }
}

void Postorder(struct Node *p)
{
    if (p)
    {
        Postorder(p->lchild);
        Postorder(p->rchild);
        printf("%d ", p->data);
    }
}

void freeTree(struct Node *p)
{
    if (p)
    {
        freeTree(p->lchild);
        freeTree(p->rchild);
        free(p);
    }
}

int main()
{
    TreeCreate();

    printf("Preorder Traversal: ");
    preorder(root);

    printf("\nInorder Traversal: ");
    Inorder(root);

    printf("\nPostorder Traversal: ");
    Postorder(root);

    return 0;
}
