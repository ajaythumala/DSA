#ifndef Stack_h
#define Stack_h

#include <iostream>
using namespace std;
#include "cpp_queue.h"


template <typename T>
class sNode
{
    public:
        T data; // int
        sNode *next;

        sNode()
        {
            // this -> data; // = 0
            this -> next = NULL;
        }
        T return_data()
        {
            return this -> data;
        }
        sNode* return_next()
        {
            return this -> next;
        }

};

template <typename T>
class Stack
{
    public:
        sNode<T> *top = NULL;   
        void push(T element)
        {

            sNode<T> *temp = new sNode<T>;
            temp -> data = element;
            if (top == NULL)
                temp -> next = NULL;
            else
                temp -> next = top;
            top = temp;
        }
        T pop()
        {
            if (isEmpty())
            {
                cout << "\nStack is Empty\n";
                return 0;
            }
            sNode<T> *p;
            p = top;
            T removed = p -> data;
            top = top -> next;
            delete p;
            p = NULL;
            return removed;
        }
        bool isEmpty()
        {
            return top == NULL;
        }
};

// int main()
// {
//     Stack<int> s;
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     cout << s.pop();
//     cout << s.pop();
//     cout << s.pop();
//     cout << s.pop();
//     cout << "hello";
//     return 0;
// }

#endif