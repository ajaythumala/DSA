#ifndef Queue_h
#define Queue_h

#include<iostream>
using namespace std;

struct Tree_Node
{
    Tree_Node *left_child;
    int val;
    Tree_Node *right_child;
};

struct Node
{
    Tree_Node *data;
    Node *next;
};

struct LL_Queue
{
    int size;
    Node *head;
    Node *end;
};

void enqueue(LL_Queue *llq, Tree_Node *element)
{
    Node* temp = new Node;
    if (temp == NULL)
        cout << "Queue is full\n";
    else
    {
        temp -> data = element;
        temp -> next = NULL;
        if (llq -> head == NULL)
        {
            llq -> head = llq -> end = temp;
            llq -> size = 1;
        }
        else
        {
            llq -> end -> next = temp;
            llq -> end = temp;
            llq -> size += 1;
        }   
    }     
}

Tree_Node* dequeue(LL_Queue *llq)
{
    Tree_Node *removed = NULL;
    if (llq -> head == NULL)
        cout << "Queue is empty";
    else
    {
        removed = llq -> head -> data;
        Node *temp = llq -> head;
        llq -> head = llq -> head -> next;
        delete temp;
        llq -> size -= 1;
    }
    return removed;
}

void Display(LL_Queue *llq)
{
    struct Node *p = llq -> head;
    while(p)
    {
        // printf("%d ",p->data);
        cout << p -> data << endl;
        p=p->next;
    }
    printf("\n");
}

int isEmpty(LL_Queue q)
{
    return q.size == 0;
}


#endif