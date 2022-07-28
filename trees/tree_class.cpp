#include<iostream>
#include "cpp_queue.h"
#include "stack_template.h"
using namespace std;

class Tree
{
    public:
        Tree_Node *root = NULL;

        void create_tree();
        void preorder() {preorder(root);}
        void preorder(Tree_Node *p);
        void ipreorder(){ipreorder(root); cout << endl;}
        void ipreorder(Tree_Node *p);

        void postorder() {postorder(root);}
        void postorder(Tree_Node *p);
        void ipostorder() {ipostorder(root); cout << endl;}
        void ipostorder(Tree_Node *p);
        

        void inorder() {inorder(root);}
        void inorder(Tree_Node *p);
        void iinorder(){inorder(root); cout << endl;}
        void iinorder(Tree_Node *p);

        void levelorder(){levelorder(root);}
        void levelorder(Tree_Node *p);
};

void Tree :: create_tree()
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
    }
}

void Tree :: preorder(Tree_Node *p)
{
    if(p != NULL)
    {
        cout << p -> val << " ";
        preorder(p -> left_child);
        preorder(p -> right_child);
    }
}

void Tree :: postorder(Tree_Node *p)
{
    
    if(p != NULL)
    {
        postorder(p -> left_child);
        postorder(p -> right_child);
        cout << p -> val << " ";
    }
}

void Tree :: inorder(Tree_Node *p)
{
    
    if(p != NULL)
    {
        inorder(p -> left_child);
        cout << p -> val << " ";
        inorder(p -> right_child);
    }
}

void Tree :: ipreorder(Tree_Node *p)
{
    Stack<Tree_Node*> addrs;
    while (p != NULL || !addrs.isEmpty())
    {
        if (p != NULL)
        {
            cout << p -> val << " ";
            addrs.push(p);
            p = p -> left_child;
        }
        else
        {
            p = addrs.pop();
            p = p -> right_child;
        }
    }
}

void Tree :: iinorder(Tree_Node *p)
{
    Stack<Tree_Node*> addrs;
    while (p != NULL || !addrs.isEmpty())
    {
        if (p != NULL)
        {
            addrs.push(p);
            
            p = p -> left_child;
        }
        else
        {
            p = addrs.pop();
            cout << p -> val << " ";
            p = p -> right_child;
        }
    }
}

void Tree::ipostorder(Tree_Node *p) {
    Stack<long int> stk;
    long int temp;
    while (p != nullptr || ! stk.isEmpty()){
        if (p != nullptr){
            stk.push((long int)p);
            p = p -> left_child;
            // cout << "hello1\n";
        } else {
            temp = stk.pop(); 
            if (temp > 0){
                stk.push(-1 * temp);
                p = ((Tree_Node*)temp)->right_child;
                // cout <<"hello2\n";
            } else {
                cout << ((Tree_Node*)(-1 * temp))->val << " ";
                p = nullptr;
            }
        }
    }
    cout << endl;
}

void Tree :: levelorder(Tree_Node *p)
{
    Queue q2;
    cout << "hello" << p->val;
    q2.enqueue(p);
    // cout << "hello" << p->val;
    // Tree_Node *tem;
    // tem = q2.dequeue();
    

}

int main()
{
    Tree tree;
    tree.create_tree();
    // tree.preorder(tree.root);
    // cout << endl;
    // tree.postorder(tree.root);
    // cout << endl;
    // tree.inorder(tree.root);
    tree.levelorder();
    return 0;
}