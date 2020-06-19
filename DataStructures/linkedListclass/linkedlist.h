#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template <class keyType, class dataType>
class linkedList
{
public:
    linkedList();
    virtual ~linkedList();
    bool listIsEmpty() const;
    bool curIsEmpty() const;
    void toFirst();
    bool atFirst() const;
    void traverse();
    void toEnd();
    bool atEnd() const;
    int listSize() const;
    void updateData(const dataType &);
    void retrieveData(dataType &) const;

    void insertFirst(const keyType &k, const dataType &d);
    void insertEnd(const keyType &k, const dataType &d);
    void insertNode(int position, const keyType &k, const dataType &d);

    void deleteFirst();
    void deleteEnd();
    void deleteNode(const keyType &k);


	void display();



protected:
private:
    class node
    {
    public:
        keyType key;   // key
        dataType data; // Data
        node *next;    // pointer to next node
    };

    typedef node *NodePointer;

    // Pointers
    NodePointer head, cursor, prev;
};
#include "linkedlist.cpp"
#endif // LINKEDLIST_H
