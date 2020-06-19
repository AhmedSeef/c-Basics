#include "linkedlist.h"
#include <iostream>
#include <string.h>

using namespace std;

#ifndef linkedlist_IMPL__
#define linkedlist_IMPL__

//constructor create object
template <class keyType, class dataType>
linkedList<keyType, dataType>::linkedList()
{
    head = NULL;
    cursor = NULL;
    prev = NULL;
}

//delete linked list
template <class keyType, class dataType>
linkedList<keyType, dataType>::~linkedList()
{
    while (head != NULL)
    {
        cursor = head;
        head = head->next;
        delete cursor;
    }
    cout << "deleted" << endl;
}

//check list empt
template <class keyType, class dataType>
bool linkedList<keyType, dataType>::listIsEmpty() const
{
    return (head == NULL);
}

//check cursor empty
template <class keyType, class dataType>
bool linkedList<keyType, dataType>::curIsEmpty() const
{
    return (cursor == NULL);
}

//move cursor to first == head
template <class keyType, class dataType>
void linkedList<keyType, dataType>::toFirst()
{
    cursor = head;
}

//check cursor if at first == head
template <class keyType, class dataType>
bool linkedList<keyType, dataType>::atFirst() const
{
    return (cursor == head);
}

//move cursor to first == head
template <class keyType, class dataType>
void linkedList<keyType, dataType>::traverse()
{
    prev = cursor;
    cursor = cursor->next;
}

//move cursor to end element
template <class keyType, class dataType>
void linkedList<keyType, dataType>::toEnd()
{
    toFirst();
    if (!listIsEmpty())
        while (cursor->next != NULL)
            traverse();
}

// check if cursor at end its next == null
template <class keyType, class dataType>
bool linkedList<keyType, dataType>::atEnd() const
{
    return cursor->next == NULL;
}

//return list count
template <class keyType, class dataType>
int linkedList<keyType, dataType>::listSize() const
{
    NodePointer q = head;
    int counter = 0;
    if (!listIsEmpty())
        while (q != NULL)
        {
            q = q->next;
            counter++;
        }
    return counter;
}

//add in first
template <class keyType, class dataType>
void linkedList<keyType, dataType>::insertFirst(const keyType &k, const dataType &d)
{
    NodePointer pnew;
    pnew = new node;
    pnew->key = k;
    pnew->data = d;
    pnew->next = head;
    head = pnew;
}

//add in last
template <class keyType, class dataType>
void linkedList<keyType, dataType>::insertEnd(const keyType &k, const dataType &d)
{
    NodePointer newp;
    newp = new NodePointer;
    newp->key = k;
    newp->data = d;
    newp->next = NULL;
    toEnd();
    cursor->next = newp;
    cursor = newp;
}

//insert in any position expect first
template <class keyType, class dataType>
void linkedList<keyType, dataType>::insertNode(int position, const keyType &k, const dataType &d)
{
    NodePointer newp;
    newp = new NodePointer;
    newp->key = k;
    newp->data = d;
    toFirst();
    if (!listIsEmpty())
        for (int i = 0; i < position - 1; i++)
        {
            traverse();
        }

    prev->next = newp;
    newp->next = cursor;
}

//delete first element
template <class keyType, class dataType>
void linkedList<keyType, dataType>::deleteFirst()
{
    if (!listIsEmpty())
    {
        node *pdel = new node;

        pdel = head;
        head = head->next;
        delete pdel;
    }

    else
    {
        cout << " no items in list" << endl;
    }
}

//delete from last
template <class keyType, class dataType>
void linkedList<keyType, dataType>::deleteEnd()
{
    NodePointer pdel;
    toFirst();
    if (!listIsEmpty())
    {
        toEnd();
        pdel = cursor;
        delete pdel;
        prev->next = NULL;
    }
    else
    {
        cout << " no items in list" << endl;
    }
}

//delete by position
template <class keyType, class dataType>
void linkedList<keyType, dataType>::deleteNode(const keyType &k)
{
    NodePointer pdel;
    toFirst();
    if (!listIsEmpty())
    {
        if (k == 1)
        {
            deleteFirst();
        }
        while (cursor->key != k)
        {
            traverse();
        }
        pdel = cursor;
        if (pdel != NULL)
        {
            prev->next = cursor->next;
            delete pdel;
        }
        else
        {
            cout << "no item with this key";
        }
    }
    else
    {
        cout << " No books to delete";
    }
}
#endif
