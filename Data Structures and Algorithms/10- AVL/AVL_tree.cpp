#include <iostream>
#include <stdio.h>
using namespace std;

struct Node
{
    struct Node *lchild;
    int data;
    int height;
    struct Node *rchild;
}*root = NULL;


int NodeHeight(struct Node *p)
{
    int hl, hr;

    // height of left subtree
    if (p && p->lchild)
        hl = p->lchild->height;
    else
        hl = 0;

    // height of right subtree
    if (p && p->rchild)
        hr = p->rchild->height;
    else
        hr = 0;

    // height of the node
    return hl>hr ? hl+1 : hr+1;
}

int BalanceFactor(struct Node *p)
{
    // BF = hl - hr
    int hl, hr;
    hl = p && p->lchild ? p->lchild->height : 0;
    hr = p && p->rchild ? p->rchild->height : 0;

    return hl-hr;
}

struct Node *LLRotation(struct Node *p)
{
    struct Node *pl = p->lchild;
    struct Node *plr = pl->rchild;

    // Rotate Pointers
    pl->rchild = p;
    p->lchild = plr;

    // Update Heights
    p->height = NodeHeight(p);
    pl->height = NodeHeight(pl);

    // If rotation is performed around root node of the tree
    if(root == p)
        root = pl;

    return pl;
};


struct Node *RRRotation(struct Node *p)
{
    struct Node* pr = p->rchild;
    struct Node* prl = pr->lchild;

    pr->lchild = p;
    p->rchild = prl;

    // Update height
    p->height = NodeHeight(p);
    pr->height = NodeHeight(pr);

    // Update root
    if (root == p){
        root = pr;
    }
    return pr;
}

struct Node *LRRotation(struct Node *p)
{
    struct Node *pl = p->lchild;
    struct Node *plr= pl->rchild;

    pl->rchild = plr->lchild;
    p->lchild = plr->rchild;

    plr->lchild = pl;
    plr->rchild = p;

    pl->height = NodeHeight(pl);
    p->height = NodeHeight(p);
    plr->height = NodeHeight(plr);

    if(root == p)
        root = plr;

    return plr;
}

struct Node *RLRotation(struct Node *p)
{
    struct Node* pr = p->rchild;
    struct Node* prl = pr->lchild;

    pr->lchild = prl->rchild;
    p->rchild = prl->lchild;

    prl->rchild = pr;
    prl->lchild = p;

    // Update height
    pr->height = NodeHeight(pr);
    p->height = NodeHeight(p);
    prl->height = NodeHeight(prl);

    // Update root
    if (root == p){
        root = prl;
    }
    return prl;
}



// Insert
struct Node *RInsert(struct Node *p, int key)
 {
     struct Node *t = NULL;

     if(p==NULL)
     {
         t = (struct Node *)malloc(sizeof(struct Node));
         t->data = key;
         t->height = 1;
         t->lchild = t->rchild = NULL;
         return t;
     }
     if(key < p->data)
        p->lchild = RInsert(p->lchild, key);
     else if(key > p->data)
        p->rchild = RInsert(p->rchild, key);

     p->height = NodeHeight(p);

     // Checking balance Factor to decide whether it need a rotation (and which type) or not
     if(BalanceFactor(p)==2 && BalanceFactor(p->lchild) == 1)
        return LLRotation(p);
     else if (BalanceFactor(p) == -2 && BalanceFactor(p->rchild) == -1)
        return RRRotation(p);
     else if (BalanceFactor(p) == 2 && BalanceFactor(p->lchild) == -1)
        return LRRotation(p);
     else if (BalanceFactor(p) == -2 && BalanceFactor(p->rchild) == 1)
        return RLRotation(p);

    return p;
 }

 void Inorder(Node *p) {
    if (p)
    {
        Inorder(p->lchild);
        cout << p->data << ", " << flush;
        Inorder(p->rchild);
    }
 }


int main()
{
    // LL Rotation

    root = RInsert(root, 30);
    RInsert(root, 20);
    RInsert(root, 10);

    cout << "LL Rotation ";
    Inorder(root);
    cout << endl;
    cout << "Root" << root->data << endl;

    // RR Rotation
    root = RInsert(root, 10);
    RInsert(root, 20);
    RInsert(root, 30);

    cout << "RR Rotation ";
    Inorder(root);
    cout << endl;
    cout << "Root" << root->data << endl;

    // LR Rotation
    root = RInsert(root, 50);
    RInsert(root, 10);
    RInsert(root, 20);

    cout << "LR Rotation ";
    Inorder(root);
    cout << endl;
    cout << "Root" << root->data << endl;

    // RL Rotation

    root = RInsert(root, 20);
    RInsert(root, 50);
    RInsert(root, 30);

    cout << "RT Rotation ";
    Inorder(root);
    cout << endl;
    cout << "Root" << root->data << endl;

    return 0;

}


