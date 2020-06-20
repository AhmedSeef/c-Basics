// File: Queuet.cpp
// Queuet Class implementation
#include <iostream>
#include "queuet.h"
using namespace std;

// Constructor
template <class Type>
queuet<Type>::queuet()
{
	front = NULL; rear=NULL; count=0;
}

// Class Destructor
template <class Type>
queuet <Type> ::~queuet()
{
	makeQueueEmpty();
}

// Return Queue Length
template <class Type>
int queuet<Type>::queueLength() const
{
	return count; 
}

// Test for Empty queue
template <class Type>
bool queuet<Type>::queueIsEmpty() const
{
	return (front==NULL&&rear==NULL);
}

// enqueue
template <class Type>
void queuet<Type>::enqueue(Type v)
{
	NodePointer pnew;
	pnew = new node;
	pnew->data=v;
	
	if(queueIsEmpty()){
		front = pnew;
		rear=front;
		count++;
	}else{
		rear->next=pnew;
		rear=pnew;
		count++;
	}
}

// dequeue to a variable v
template <class Type>
void queuet<Type>::dequeue(Type &v)
{
	if(queueIsEmpty())cout<<"The queue is Empty"<<endl;
	else{
		if(front==rear){
			delete front;
			front = NULL;
			rear = NULL;
			count--;
		}else{
			NodePointer q;
			q=front;
			front = front->next;
			delete q;
			count--;
		}
	}
}

// Retrieve front without removing it
template <class Type>
void queuet<Type>::queueFront(Type &v) const
{
	if(queueIsEmpty())cout<<"The queue is Empty"<<endl;
	else{
		v=front->data;
	}
}

// display all queue
template <class Type>
void queuet<Type>::display() const
{
	if(queueIsEmpty()) {
	cout<<"The queue is Empty"<<endl;
	}else{
		NodePointer q;
		q=front;
		while(q!=NULL){
			count<<q->data<<endl;
			q=q->next;	
		}
	}
}

template <class Type>
void queuet<Type>::makeQueueEmpty(){
	while(!queueIsEmpty()){
		dequeue();
	}
}
