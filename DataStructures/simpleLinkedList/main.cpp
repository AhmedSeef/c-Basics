#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
} * head;

void create(int Ar[], int s);
void display(Node *node);
void displayRecursive(Node *node);
int counter(Node *node);
int sum(Node *node);
int maxN(Node *node);
int minN(Node *node);
Node *search(Node *node, int k);
void insertFirst(Node *node);
void insertLast(Node *node);
void insertPosition(Node *node, int pos);
int Delete(Node *p, int pos);

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    //create
    create(arr, 5);

    //insert first
    Node *add;
    insertFirst(add);

    //insert last
    Node *addL;
    insertLast(addL);

    //insert position
    Node *addp;

    //delete
    Delete(head,2);

    insertPosition(addp, 1);
    insertPosition(addp, 3);

    //display
    display(head);

    //display recursive
    cout << "Recursive display" << endl;
    displayRecursive(head);

    //count
    cout << "data count" << endl;
    cout << counter(head) << endl;

    //sum
    cout << "data sum" << endl;
    cout << sum(head) << endl;

    //max
    cout << "data max" << endl;
    cout << maxN(head) << endl;

    //max
    cout << "data min" << endl;
    cout << minN(head) << endl;

    //search
    cout << "data search" << endl;
    cout << search(head, 10) << endl;

    return 0;
}
void create(int Ar[], int s)
{
    Node *temp, *last;
    head = new Node;

    head->data = Ar[0];
    head->next = nullptr;
    last = head;

    for (int i = 1; i < s; i++)
    {
        temp = new Node;
        temp->data = Ar[i];
        temp->next = nullptr;
        last->next = temp;
        last = temp;
    }
}

void display(Node *node)
{
    while (node != nullptr)
    {
        cout << node->data << endl;
        node = node->next;
    }
}

void displayRecursive(Node *node)
{

    if (node != nullptr)
    {
        displayRecursive(node->next);
        cout << node->data << endl;
    }
}

int counter(Node *node)
{
    if (node == nullptr)
        return 0;
    return counter(node->next) + 1;
}

int sum(Node *node)
{
    int sumval = 0;
    while (node != nullptr)
    {
        sumval += node->data;
        node = node->next;
    }
    return sumval;
}

int maxN(Node *node)
{
    int max = 0;
    while (node != nullptr)
    {
        if (node->data > max)
            max = node->data;
        node = node->next;
    }
    return max;
}

int minN(Node *node)
{
    int min = node->data;
    while (node != nullptr)
    {
        if (node->data < min)
            min = node->data;
        node = node->next;
    }
    return min;
}

Node *search(Node *node, int k)
{
    while (node != nullptr)
    {
        if (k == node->data)
        {
            return node;
        }
        else
        {
            node = node->next;
        }
    }
}

void insertFirst(Node *node)
{
    node = new Node;
    node->data = 3333;
    node->next = head;
    head = node;
}

void insertLast(Node *node)
{
    Node *p = head;
    node = new Node;
    node->data = 9999;
    node->next = nullptr;
    while (p->next != nullptr)
    {
        p = p->next;
    }
    p->next = node;
}

void insertPosition(Node *node, int pos)
{

    Node *p1 = head;

    //create node to add
    node = new Node;
    node->data = 1000;

    if (pos == 1)
    {
        insertFirst(node);
    }

    for (int i = 1; i < pos - 1; i++)
    {
        p1 = p1->next;
    }

    node->next = p1->next;
    p1->next = node;
}

int Delete(Node *p, int pos)
{
    Node *q = NULL;
    int x = -1;
    if (pos < 1 || pos > 5)
        return -1;
    if (pos == 1)
    {
        p = head;
        head = head->next;
        x = p->data;
        delete p;
    }
    else
    {
        p = head;
        for (int i = 0; i < pos - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        delete p;
    }
    return x;
}
