#include "stack.h"
#include <iostream>
#include <string.h>

using namespace std;

#ifndef STACK_IMPL__
#define STACK_IMPL__

template <class Type>
stack<Type>::stack()
{
    maxSize = 10;
    top =-1;
    stackArr = new int[maxSize];
}

template <class Type>
stack<Type>::stack(int size)
{
    maxSize = size;
    top =-1;
    stackArr = new int[maxSize];
}

template <class Type>
stack<Type>::~stack()
{
    delete stackArr;
    top = -1;
}


template <class Type>
void stack<Type>::push(Type t)
{

    if(!stackIsFull())
    {
        top++;

        stackArr[top] = t ;
    }
   else{ cout<< "stack over flow" <<endl;}
}

template <class Type>
void stack<Type>::pop()
{
    Type x = -1;
    if(!stackIsEmpty())
    {
        x = stackArr[top];
        top --;
    }
   else{ cout<< "stack is empty" <<endl;}
}

template <class Type>
void stack<Type>::stackTop()
{
    if(!stackIsEmpty())
    {

        cout << stackArr[top] <<endl;
    }
   else{ cout<< "stack is empty" <<endl;}
}



template <class Type>
bool stack<Type>::stackIsEmpty() const
{
    return top==-1;
}

template <class Type>
bool stack<Type>::stackIsFull() const
{
    return top==maxSize-1;
}
#endif
