#include<iostream>
#include<stdio.h>
using namespace std;


struct Node
{
    int data;
    struct Node *next;
}*first = NULL, *second=NULL, *third=NULL;

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

void createLinkedList2(int A[], int n)
{
    struct Node *t, *last;
    second = (struct Node *)malloc(sizeof(struct Node));
    second -> data = A[0];
    second -> next = NULL;
    last = second;

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

int Count(struct Node *p)
{
    int l = 0;
    while(p!=NULL)
    {
        l++;
        p = p->next;
    }
    return l;
}

// ----------------------- Linear Search -------------------------------

struct Node * LSearch(struct Node *p, int key)
{
    while(p!=NULL)
    {
        if (key == p->data)
            return (p);

        p = p->next;
    }
    return NULL;
}

struct Node * R_LSearch(struct Node *p, int key)
{
    if(p==NULL)
        return NULL;
    if (key==p->data)
        return p;
    return R_LSearch(p->next, key);

}

// Moving to Head
struct Node * Improved_LSearch(struct Node *p, int key)
{
    struct Node *q;
    while(p!=NULL)
    {
        if (key == p->data)
        {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q = p;
        p = p->next;
    }
    return NULL;
};

// ----------------------- Insertion -------------------------------
void Insert(struct Node *p, int index, int x)
{
    struct Node *t;

    if (index < 0 || index > Count(p))
        return;

    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    if(index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        p=first;
        for (int i = 0; i < index-1; i++)
            p = p->next;

        t->next = p->next;
        p->next = t;
    }
}


void InsertionAtLast(int x) {
    Node* t = new Node; // Create a new node
    t->data = x;        // Set the data for the new node
    t->next = NULL;     // The new node will be the last node, so next is NULL

    if (first == NULL) { // If the list is empty
        first = t;       // The new node becomes the first node
    } else {
        Node* last = first; // Start from the head of the list
        while (last->next != NULL) { // Traverse to the last node
            last = last->next;
        }
        last->next = t; // Link the last node to the new node
    }
}




// ----------------------- Insertion In Sorted Linked List -------------------------------
void SortedInsert(struct Node *p, int x)
{
    struct Node *t = new Node;
    struct Node *q = NULL;

    t -> data = x;
    t -> next = NULL;

    if(first==NULL)
        t = first;
    else{
        while(p && p->data < x)
        {
            q = p;
            p = p->next;
        }
        if(p == first)
        {
            t->next = first;
            first = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}



// ----------------------- Deletion On Linked List -------------------------------
int Delete(struct Node *p, int index)
{
    struct Node *q = NULL;
    int x = -1;

    if(index < 0 || index > Count(p))
        return -1;

    if(index==1)
    {
        q = first;
        x = first->data;
        first = first->next;
        free(q);
        return x;
    }
    else
    {
        for(int i = 0; i < index-1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        free(p);
        return x;
    }
}


// ----------------------- Checking if Linked List is Sorted -------------------------------
int isSorted(struct Node *p)
{
    int x = -65536;
    while(p != NULL)
    {
        if(p->data < x)
            return 0;
        x = p->data;
        p = p->next;
    }
    return 1;
}



// ----------------------- Removing Duplications from Linked List -------------------------------
void RemoveDuplicate(struct Node *p)
{
    struct Node *q = p->next;

    while(q != NULL)
    {
        if(p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}



// ----------------------- Reversing a Linked List -------------------------------
void Reverse1(struct Node *p)
{
    int *A;
    int i = 0;
    struct Node *q = p;

    A = (int *)malloc(sizeof(int) * Count(p));

    while(q != NULL)
    {
        A[i] = q->data;
        i++;
        q = q->next;
    }

    q = p;
    i--;

    while(q != NULL)
    {
        q->data = A[i];
        i--;
        q = q->next;
    }
}

void Reverse2(struct Node *p)
{
    struct Node *q = NULL;
    struct Node *r = NULL;

    while(p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}

void Reverse3(struct Node *p, struct Node *q)
{
    if (p)
    {
        Reverse3(p, p->next);
        p = p->next;
    }
    else {
        first = q;
    }
}




// ------------------  Merge 2 Linked Lists -------------------------------
void Merge(struct Node *p, struct Node *q)
{
    struct Node *last;

    if(p->data < q->data)
    {
        third = last = p;
        p = p->next;
        third->next = NULL;
    }
    else
    {
        third = last = q;
        q = q->next;
        third->next = NULL;
    }

    while(p && q)
    {
        if(p->data < q->data)
        {
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        }
        else
        {
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;
        }
    }

    if(p)last->next = p;
    if(q)last->next = q;
}




// ----------------------- Checking Loop Linked List -------------------------------
int isLoop(struct Node *f)
{
    struct Node *p, *q;
    p=q=f;

    do
    {
        // Move P one time
        p = p->next;

        // Move q Two times
        q = (q!=NULL)?q->next:q;
        /*
        q = q->next;
        if(q!=NULL)
            q = q->next;
        else
            q = NULL;
        */
    }while(p && q && p!=q);

    if(p == q)
        return 1;
    else
        return 0;

}




// ----------------------- MAIN SECTION -------------------------------

int main()
{
    struct Node *temp;
    int A[]={3,5,7,10,25,8,32,2};
    createLinkedList(A,8);

    display(first);

    cout << endl << "--------------------------------------------" << endl;


// ----------------------- Linear Search -------------------------------

    temp = LSearch(first, 7);
    printf("Key %d is found", temp->data);

    cout << endl << "--------------------------------------------" << endl;


    printf("Display before LSearch: \n");
    display(first);

    temp = Improved_LSearch(first, 7);
    if(temp)
        printf("\n \n Key %d is found \n \n", temp->data);
    else
        printf("Key not found \n");


    printf("Display After LSearch: \n");
    display(first);

    cout << endl << "--------------------------------------------" << endl;


    // ----------------------- Insertion -------------------------------
    cout << "Insertion: " << endl;
    Insert(first, 0, 5);
    display(first);

    cout << endl;

    Insert(first, 2, 100);
    display(first);

    cout << endl;

    InsertionAtLast(500);
    display(first);

    cout << endl << "--------------------------------------------" << endl;

// ----------------------- Insertion In Sorted Linked List -------------------------------

    cout << "Insertion In Sorted Linked List: " << endl;
    int B[] = {10,20,30,40,50};
    createLinkedList(B, 5);
    display(first);

    cout << endl;

    SortedInsert(first,15);
    display(first);


    cout << endl << "--------------------------------------------" << endl;

// ----------------------- Deletion On Linked List -------------------------------

    cout << "Deletion: " << endl;
    cout << "Before Deletion: ";
    display(first);

    cout << endl;

    Delete(first,2);

    cout << "After Deletion index 2: ";
    display(first);


    cout << endl << "--------------------------------------------" << endl;

// ----------------------- Checking if Linked List is Sorted -------------------------------

    cout << "Checking if Linked List is Sorted: " << isSorted(first) << endl;


    cout << endl << "--------------------------------------------" << endl;

// ----------------------- Removing Duplications from Linked List -------------------------------

    cout << "Removing Duplications from Linked List: " << endl;

    int C[]={10,20,20,40,50,50,50,60};
    createLinkedList(C,8);

    cout << "Before Removing Duplication: ";

    display(first);

    RemoveDuplicate(first);


    cout << endl << "After Removing Duplication: ";
    display(first);

    cout << endl << "--------------------------------------------" << endl;

// ----------------------- Reversing a Linked List -------------------------------
    cout << "Reversing the Linked List: " << endl;
    Reverse1(first);
    display(first);

    cout << endl << "--------------------------------------------" << endl;

// -----------------------  Merge Linked Lists -------------------------------
    cout << "Merging 2 Linked Lists" << endl;
    int D[] ={10,20,40,50,60};
    int E[]= {15,18,25,30,55};

    createLinkedList(D,5);
    createLinkedList2(E,5);

    cout << "Linked List 1: " ;
    display(first);

    cout << endl;

    cout << "Linked List 2: " ;
    display(second);

    cout << endl;

    Merge(first,second);

    cout << "Merged LinkedList: ";
    display(third);


    cout << endl << "--------------------------------------------" << endl;


// ----------------------- Checking Loop Linked List -------------------------------

    cout << "Checking if there is a loop: " << endl;

    struct Node *t1,*t2;
    int F[]={10,20,30,40,50};
    createLinkedList(F,5);
    t1=first->next->next;               // t1 Point to 30
    t2=first->next->next->next->next;   // t2 Point to 50
    t2->next=t1;                        // t2 point to 30 again
    printf("%d\n",isLoop(first));


// ----------------------- Linked List Class -------------------------------


    return 0;
}




