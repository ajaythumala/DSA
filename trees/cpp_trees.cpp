#include<iostream>
#include "cpp_queue.h"
using namespace std;


// global variable
Tree_Node *root = NULL;

void create_tree()
{
    Tree_Node *p, *t;
    int input;
    Queue q;
    
    cout << "Enter root value" << endl;
    cin >> input;

    root = new Tree_Node;
    root -> val = input;
    root -> left_child = root -> right_child = NULL;
    q.enqueue(root);

    q.Display();

    while(!q.isEmpty())
    {
        p = q.dequeue();
        cout << "Enter left child of " << p -> val << endl;
        cin >> input;
        if (input != -1)
        {
            t = new Tree_Node;
            t -> val = input;
            t -> left_child = t -> right_child = NULL;
            p -> left_child = t;
            q.enqueue(t);
        }

        cout << "Enter right child of " << p -> val << endl;
        cin >> input;
        if (input != -1)
        {
            t = new Tree_Node;
            t -> val = input;
            t -> left_child = t -> right_child = NULL;
            p -> right_child = t;
            q.enqueue(t);
        }

        q.Display();
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