#include <iostream>
#include <stdio.h>

using namespace std;


/* ----------------------- GLOBAL TREE NODE Structure ----------------------- */
struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
};

/* ----------------------- START Stack Structure ----------------------- */

struct stack
{
    int size;
    int top;
    struct Node **s;
};

void createStack(struct stack *st, int size)
{
    st->size = size;
    st->top = -1;
    st->s = (struct Node **)malloc(st->size * sizeof(struct Node *));
}

void Push(struct stack *st, Node* x)
{
    if(st->top == st->size-1)
        printf("Stack Overflow\n");
    else
    {
        st->top++;
        st->s[st->top] = x;
    }
}

struct Node *Pop(struct stack *st)
{
    struct Node *x = NULL;

    if(st->top == -1)
        printf("Stack Underflow\n");
    else
    {
        x = st->s[st->top--];
    }
    return x;
};

int isEmptyStack(struct stack st)
{
    if(st.top == -1)
        return 1;
    else
        return 0;
}

int isFullStack(struct stack st)
{
    return st.top == st.size-1;
}


/* ----------------------- END Stack Structure ----------------------- */

/* ------------------------ START Queue ------------------------*/

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


void iterativePreorder(struct Node *p)
{
    struct stack stk;
    createStack(&stk, 100);

    while(p || !isEmptyStack(stk))
    {
        if(p != NULL)
        {
            printf("%d ", p->data);
            Push(&stk, p);
            p = p->lchild;
        }
        else
        {
            p = Pop(&stk);
            p = p->rchild;
        }
    }
}

void iterativeInorder(struct Node *p)
{
    struct stack stk;
    createStack(&stk, 100);

    while(p || !isEmptyStack(stk))
    {
        if(p != NULL)
        {
            Push(&stk, p);
            p = p->lchild;
        }
        else
        {
            p = Pop(&stk);
            printf("%d ", p->data);
            p = p->rchild;
        }
    }
}

void LevelOrder(struct Node *root)
{
    struct Queue q;
    create(&q, 100);

    printf("%d ", root->data);
    enqueue(&q, root);

    while(!isEmpty(q))
    {
        root = dequeue(&q);
        if(root->lchild)
        {
            printf("%d ", root->lchild->data);
            enqueue(&q, root->lchild);
        }
        if(root->rchild)
        {
            printf("%d ", root->rchild->data);
            enqueue(&q, root->rchild);
        }
    }

}

int Count(struct Node *root)
{
    if(root != NULL)
        return Count(root->lchild) + Count(root->rchild) + 1;
    else
        return 0;
}

int height (struct Node *root)
{
    int x = 0, y = 0;

    if (root == 0)
        return 0;
    else
    {
       x = height(root->lchild);
       y = height(root->rchild);
       if (x > y)
            return x + 1;
       else
        return y + 1;
    }
}




int main()
{
    TreeCreate();

    printf("\nPre Order ");
    iterativePreorder(root);

    printf("\nIn-Order ");
    iterativeInorder(root);

    printf("\nLevel-Order ");
    LevelOrder(root);

    printf("\nCount %d", Count(root));
    printf("\nHeight %d", height(root));
    return 0;
}
