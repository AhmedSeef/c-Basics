#include <iostream>
#include "linkedlist.h"

using namespace std;

int main()
{
    linkedList<int,int> *linked = new linkedList<int,int>();

    linked->insertFirst(1,2);
    linked->deleteFirst();
    linked->deleteFirst();
    linked->deleteEnd();

    cout << linked->curIsEmpty() << endl;
    cout << linked->listIsEmpty() << endl;

    delete linked;
    cout << "Hello world!" << endl;
    return 0;
}
