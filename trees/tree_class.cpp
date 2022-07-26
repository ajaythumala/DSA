#include<iostream>
#include "cpp_queue.h"
using namespace std;

class Tree
{
    public:
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

        void preorder(Tree_Node *p)
        {
            if(p != NULL)
            {
                cout << p -> val << " ";
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

        void inorder(Tree_Node *p)
        {
            
            if(p != NULL)
            {
                inorder(p -> left_child);
                cout << p -> val << " ";
                inorder(p -> right_child);
            }
        }
};

int main()
{
    Tree tree;
    tree.create_tree();
    tree.preorder(tree.root);
    cout << endl;
    tree.postorder(tree.root);
    cout << endl;
    tree.inorder(tree.root);
    return 0;
}