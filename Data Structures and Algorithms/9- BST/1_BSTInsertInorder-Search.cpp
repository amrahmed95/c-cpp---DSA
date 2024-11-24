#include <iostream>
#include <stdio.h>
using namespace std;

struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
}*root = NULL;

struct stack
{
    int size;
    int top;
    struct Node **s;
};


void Insert(int key)
{
    struct Node *t = root;
    struct Node *r, *p;

    // If there is no node created
    if(root==NULL)
    {
        p = (struct Node *)malloc(sizeof(struct Node));
        p->data = key;
        p->lchild = NULL;
        p->rchild = NULL;
        root = p;
        return;
    }

    // Searching for the key
    while(t != NULL)
    {
        r = t;
        if(key < t->data)
            t = t->lchild;
        else if(key > t->data)
            t = t->rchild;
        else
            return;
    }

    // Key is not found, Create a new node and link
    // Now t points at NULL and r points at insert location
    p = (struct Node *)malloc(sizeof(struct Node));
    p->data = key;
    p->lchild = NULL;
    p->rchild = NULL;

    if(key < r->data)
        r->lchild = p;
    else
        r->rchild = p;
}


void Inorder(struct Node *p)
{
    if(p)
    {
        Inorder(p->lchild);
        printf("%d ", p->data);
        Inorder(p->rchild);
    }

}


struct Node* Search(int key)
{
    struct Node* t = root;
    while(t != NULL)
    {
        if(key == t->data)
            return t;
        else if (key < t->data)
            t = t->lchild;
        else
            t = t->rchild;
    }
    return NULL;
}

struct Node * RInsert(struct Node *p, int key)
{
    struct Node *t = NULL;
    if(p == NULL)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = key;
        t->lchild = NULL;
        t->rchild = NULL;
        return t;
    }

    if(key < p->data)
        p->lchild = RInsert(p->lchild, key);
    else if (key > p->data)
        p->rchild = RInsert(p->rchild, key);

    return p;
};


int Height(struct Node *p)
{
    int x;
    int y;

    if(!p)
        return 0;

    x = Height(p->lchild);
    y = Height(p->rchild);
    return x>y ? x+1 : y+1;
}

struct Node *InPredecessor(struct Node *p)
{
    // The Inorder predecessor is the most right element of the left subtree
    while(p && p->rchild != NULL)
    {
        p = p->rchild;
    }
    return p;
};

struct Node *InSuccessor(struct Node *p)
{
    // The Inorder Successor is the most left element of the right subtree
    while(p && p->lchild != NULL)
    {
        p = p->lchild;
    }
    return p;
};

struct Node *Delete(struct Node *p, int key)
{

    struct Node *q;

    if(p == NULL)
        return NULL;

    // p is a leaf node
    if(p->lchild == NULL && p->rchild == NULL)
    {
        if(p == root)
            root = NULL;
        free(p);
        return NULL;
    }


    if(key < p->data)
    {
        // Go for the left subtree
        p->lchild = Delete(p->lchild, key);
    }

    else if (key > p->data)
    {
        // Go for the right subtree
        p->rchild = Delete(p->rchild, key);

    }
    else // KEY = p->data
    {
        // CHECK Which subtree has bigger height
        if(Height(p->lchild) > Height(p->rchild))
        {
            // Get the Inorder Predecessor element
            q = InPredecessor(p->lchild);

            // Replace the element (key <> Predecessor element)
            p->data = q->data;

            // Delete the node q
            p->lchild = Delete(p->lchild, q->data);
        }
        else
        {
            // Get the Inorder Successor element
            q = InSuccessor(p->rchild);

            // Replace the element (key <> Predecessor element)
            p->data = q->data;

            // Delete the node q
            p->rchild = Delete(p->rchild, q->data);
        }
    }
    return p;
};




int main()
{


    Insert(10);
    Insert(5);
    Insert(20);
    Insert(8);
    Insert(30);

    Inorder(root);
    printf("\n");


    struct Node *temp;
    temp = Search(2);
    if(temp!=NULL)
        printf("Element %d is found",temp->data);
    else
        printf("Element is not found");

    printf("\n");
    printf("\n");

    root = RInsert(root,10);
    RInsert(root,5);
    RInsert(root,20);
    RInsert(root,8);
    RInsert(root,30);

    Inorder(root);
    printf("\n");
    printf("\n");

    printf("After Deleting element 20: \n");
    Delete(root, 10);
    Inorder(root);

    return 0;
}
