#include<iostream>
#include<stdio.h>

using namespace std;

class Node
{
public:
    Node *lchild;
    int data;
    Node *rchild;
};



/* ------------------------ START Queue Class ------------------------*/

class Queue{
private:
    int size;
    int front;
    int rear;
    Node** Q;  // [Node*]*: Pointer to [Pointer to Node]
public:
    Queue();
    Queue(int size);
    ~Queue();
    bool isFull();
    bool isEmpty();
    void enqueue(Node* x);
    Node* dequeue();
};

Queue::Queue()
{
    front = rear = -1;
    size = 10;
    Q = new Node* [size];
}

Queue::Queue(int size) {
    this->size = size;
    front = -1;
    rear = -1;
    Q = new Node* [size];
}

Queue::~Queue() {
    delete [] Q;
}

bool Queue::isEmpty() {
    if (front == rear){
        return true;
    }
    return false;
}

bool Queue::isFull() {
    if (rear == size-1){
        return true;
    }
    return false;
}

void Queue::enqueue(Node* x) {
    if (isFull()){
        cout << "Queue Overflow \n" << endl;
    } else {
        rear++;
        Q[rear] = x;
    }
}

Node* Queue::dequeue() {
    Node* x = NULL;
    if (isEmpty()){
        cout << "Queue Underflow" << endl;
    } else {
        front++;
        x = Q[front];
    }
    return x;
}

/* ------------------------ END Queue Class ------------------------*/


/* ------------------------ START TREE Class ------------------------*/
class Tree
{
private:
    Node* root;
public:
    Tree() { root = NULL; }
    void CreateTree();
    void Preorder(){ Preorder(root); }  // Passing Private Parameter in Constructor
    void Preorder(Node* p);
    void Postorder(){ Postorder(root); }  // Passing Private Parameter in Constructor
    void Postorder(Node* p);
    void Inorder(){ Inorder(root); }        // Passing Private Parameter in Constructor
    void Inorder(Node* p);
    void Levelorder(){ Levelorder(root); }  // Passing Private Parameter in Constructor
    void Levelorder(Node* p);
    int Height(){ return Height(root); }  // Passing Private Parameter in Constructor
    int Height(Node* p);
    Node* generateFromTraversal(int inorder[], int preorder[], int inStart, int inEnd);
    Node* getRoot(){ return root; }
};


Tree::Tree() {
    root = nullptr;
}

void Tree::CreateTree()
{
    Node *p, *t;
    int x;
    Queue q(100);
    //create(&q, 100);

    printf("Enter root value: ");
    scanf("%d", &x);
    root = new Node;
    root->data = x;
    root->lchild = NULL;
    root->rchild = NULL;
    q.enqueue(root);

    while (!q.isEmpty())
    {
        p = q.dequeue();
        printf("Enter left child of %d(-1 for no child): ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.enqueue(t);
        }
        printf("Enter right child of %d(-1 for no child): ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            q.enqueue(t);
        }
    }
}

void Tree::Preorder(Node *p)
{
    if (p)
    {
        printf("%d ", p->data);
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}

void Tree::Inorder(Node *p)
{
    if (p)
    {
        Inorder(p->lchild);
        printf("%d ", p->data);
        Inorder(p->rchild);
    }
}

void Tree::Postorder(Node *p)
{
    if (p)
    {
        Postorder(p->lchild);
        Postorder(p->rchild);
        printf("%d ", p->data);
    }
}

void Tree::Levelorder(Node *p)
{
    Queue q(100);
    printf("%d ", root->data);
    q.enqueue(root);

    while (! q.isEmpty()){
        p = q.dequeue();
        if (p->lchild){
            printf("%d ", root->lchild->data);
            q.enqueue(p->lchild);
        }
        if (p->rchild){
            printf("%d ", root->rchild->data);
            q.enqueue(p->rchild);
        }
    }
}

int Tree::Height(Node *p)
{
    int l = 0;
    int r = 0;
    if (p == nullptr){
        return 0;
    }

    l = Height(p->lchild);
    r = Height(p->rchild);
    if (l > r){
        return l + 1;
    } else {
        return r + 1;
    }
}




/* ------------------------ END TREE Class ------------------------*/


int main()
{
    Tree t;

    t.CreateTree();

    cout << "Preorder: " << flush;
    t.Preorder(t.getRoot());
    cout << endl;

    cout << "Inorder: " << flush;
    t.Inorder(t.getRoot());
    cout << endl;

    cout << "Postorder: " << flush;
    t.Postorder(t.getRoot());
    cout << endl;

    cout << "Levelorder: " << flush;
    t.Levelorder(t.getRoot());
    cout << endl;

    cout << "Height: " << t.Height(t.getRoot()) << endl;

    cout << "Recursive Passing Private Parameter in Constructor" << endl;

    cout << "Preorder: " << flush;
    t.Preorder();
    cout << endl;

    cout << "Inorder: " << flush;
    t.Inorder();
    cout << endl;

    cout << "Postorder: " << flush;
    t.Postorder();
    cout << endl;

    cout << "Levelorder: " << flush;
    t.Levelorder();
    cout << endl;

    cout << "Height: " << t.Height() << endl;


    return 0;
}
