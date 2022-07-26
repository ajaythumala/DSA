#include<iostream>
#include "Queue.h"
using namespace std;

// global variable
Tree_Node *root = NULL;

void create_tree()
{
    Tree_Node *p, *t;
    int input;
    LL_Queue q;
    
    cout << "Enter root value" << endl;
    cin >> input;

    root = new Tree_Node;
    root -> val = input;
    root -> left_child = root -> right_child = NULL;
    enqueue(&q, root);

    Display(&q);

    while(!isEmpty(q))
    {
        p = dequeue(&q);
        cout << "Enter left child of " << p -> val << endl;
        cin >> input;
        if (input != -1)
        {
            t = new Tree_Node;
            t -> val = input;
            t -> left_child = t -> right_child = NULL;
            p -> left_child = t;
            enqueue(&q, t);
        }

        cout << "Enter right child of " << p -> val << endl;
        cin >> input;
        if (input != -1)
        {
            t = new Tree_Node;
            t -> val = input;
            t -> left_child = t -> right_child = NULL;
            p -> right_child = t;
            enqueue(&q, t);
        }

        Display(&q);
    }
}

void preorder(Tree_Node *p)
{
    if(p != NULL)
    {
        cout << p -> val;
        preorder(p -> left_child);
        preorder(p -> right_child);
    }
}

void postorder(Tree_Node *p)
{
    if(p != NULL)
    {
        postorder(p -> left_child);
        postorder(p -> right_child);
        cout << p -> val << " ";
    }
}

int main()
{
    create_tree();
    preorder(root);
    postorder(root);
    return 0;
}