#ifndef STACKL_H
#define STACKL_H

template <class Type>
class stackL
{
public:
    stackL();
    virtual ~stackL();
    void push(Type t);	// Push
    void pop();	// Pop
    void stackTop() const;	// retrieve top
    bool stackIsEmpty() const;	// Test for Empty stack

    Type add(Type a, Type b);

protected:
private:
    class node
    {
    public:
        Type e;     // stack element
        node *next; // pointer to next node
    } *top;              // end of class node declaration


};



#include "stackl.cpp"
#endif // STACKL_H

