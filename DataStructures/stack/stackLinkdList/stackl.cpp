#include "stackl.h"
#include "iostream"
using namespace std;

#ifndef STACKL_IMPL__
#define STACKL_IMPL__
template <class Type>
stackL<Type>::stackL()
{
    top = nullptr;
}

template <class Type>
stackL<Type>::~stackL()
{
    delete top;
}

template <class Type>
void stackL<Type>::push(Type t)
{
    node *newptr = new node;
    newptr->e = t;
    newptr->next = top;
    top = newptr;
}

template <class Type>
void stackL<Type>::pop()
{
    node *delptr = new node;
    delptr = top;
    top = top->next;
    delete delptr;
}

template <class Type>
void stackL<Type>::stackTop() const
{
    if(!stackIsEmpty())
        cout << top->e <<endl;
    cout << "stack is Empty";
}


template <class Type>
bool stackL<Type>::stackIsEmpty() const
{
    return top == nullptr;
}

template <class Type>
Type stackL<Type>::add(Type a, Type b)
{
    return a + b;
}


#endif
