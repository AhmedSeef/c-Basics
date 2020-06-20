// File: QueueL.h
// Linked List Queue class definition
#ifndef QUEUET_H           
#define QUEUET_H           
template <class Type>
class queuet
{
   public:
    queuet(); 			// Constructor
	~queuet(); 			// Destructor
	void enqueue(Type ); 		// Add to rear   
	void dequeue(Type &); 		// Remove from front
	void queueFront(Type &) const;	// retrieve front
    bool queueIsEmpty() const;	// Test for Empty queue
	int  queueLength() const;	// Queue Length 
	void display()const;    
	void makeQueueEmpty(); 
   
private:
	 // Node Class
	   class node
	   {
		public:
			Type data;			// queue element
			node *next;		// pointer to next node	       
		}; // end of class node declaration	
typedef node * NodePointer;
	
	NodePointer front , rear, cursor;		// Pointers
	int count;				// length
	
};  

#endif // QUEUET_H
