#ifndef STACK_H
#define STACK_H

template <class Type>
class stack
{
public:
    stack();
    stack(int size);
    virtual ~stack();
    void push(Type t);             // Push
    void pop();            // Pop
    void stackTop() ; // retrieve top
    bool stackIsEmpty() const;   // Test for Empty stack
    bool stackIsFull() const;    // Test for Full stack

protected:
private:
    int *stackArr;
    int maxSize;
    int top;
};

#include "stack.cpp"
#endif // STACK_H
