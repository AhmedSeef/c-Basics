// File: Queuet.cpp
// Queuet Class implementation
#include <iostream>
#include "queuet.h"
using namespace std;

// Constructor with argument, size is nelements, default is 128
template <class Type>
Queuet<Type>::Queuet(int nelements)
{
	MaxSize=nelements;
	queue=new Type[MaxSize];
	front = 0;
	rear=-1;
	count=0;
}

// Class Destructor
template <class Type>
Queuet <Type> ::~Queuet()
{
	delete []queue;
}

// Return Queue Length
template <class Type>
int Queuet<Type>::queueLength() const
{
	return count; 
}

// Test for Empty queue
template <class Type>
bool Queuet<Type>::queueIsEmpty() const
{
	return (queueLength()==0);
}

// Test for Full queue
template <class Type>
bool Queuet<Type>::queueIsFull() const
{
	return (queueLength()==MaxSize);
}

// enqueue
template <class Type>
void Queuet<Type>::enqueue(Type v)
{
	if (queueIsFull()) cout<<"The queue is Full"<<endl;
	else{
		rear = (rear+1)%MaxSize;
		queue[rear]=v;
		count++;
	}
}

// dequeue to a variable v
template <class Type>
void Queuet<Type>::dequeue(Type &v)
{
	if(queueIsEmpty())cout<<"The queue is Empty"<<endl;
	else{
		v=queue[front];
		front = (front+1)%MaxSize;
		count--;
	}
}

// Retrieve front without removing it
template <class Type>
void Queuet<Type>::queueFront(Type &v) const
{
	if(queueIsEmpty())cout<<"The queue is Empty"<<endl;
	else{
		v=queue[front];
	}
}

// Retrieve rear without removing it
template <class Type>
void Queuet<Type>::queueRear(Type &v) const
{
	if(queueIsEmpty())cout<<"The queue is Empty"<<endl;
	else{
		v=queue[rear];
	}
}
