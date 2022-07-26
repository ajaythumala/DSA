#ifndef Queue_h
#define Queue_h

#include <iostream>
using namespace std;

class Tree_Node
{
    public:
        Tree_Node *left_child;
        int val;
        Tree_Node *right_child;
};

class Node
{
    public:
        Tree_Node *data; // int
        Node *next;

        Node()
        {
            this -> data = NULL; // = 0
            this -> next = NULL;
        }
        Tree_Node* return_data()
        {
            return this -> data;
        }
        Node* return_next()
        {
            return this -> next;
        }

};

class Queue
{
    public:
        int size;
        Node *head, *end;

        void enqueue(Tree_Node *element) //
        {
            Node* temp = new Node;
            if (temp == NULL)
                cout << "Queue is full\n";
            else
            {
                temp -> data = element;
                temp -> next = NULL;
                if (head == NULL)
                {
                    head = end = temp;
                    size = 1;
                }
                else
                {
                    end -> next = temp;
                    end = temp;
                    size += 1;
                }   
            }     
        }

        Tree_Node* dequeue()
        {
            Tree_Node* removed = NULL; //
            if(isEmpty())
            {
                cout << "The Queue is empty" << endl;
                return removed;
            }
            else
            {
                removed = head -> data;
                Node *temp = head;
                head = head -> next;
                delete temp;
                temp = NULL;
                size -= 1;
            }
            return removed;
        }

        bool isEmpty()
        {
            return size == 0;
        }
            
        void Display()
        {
            Node *p = head;
            while(p)
            {
                cout << p -> data << endl;
                p = p -> next;
            }
        }
};

// int main()
// {
//     // Node hello;
//     // cout << hello.return_next();
//     Queue q;
//     q.enqueue(2);
//     q.enqueue(4);
//     q.enqueue(89);
//     q.dequeue();
//     q.Display();
//     return 0;
// }

#endif