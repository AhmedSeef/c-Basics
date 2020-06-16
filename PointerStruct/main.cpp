#include <iostream>

using namespace std;

struct triangle{
    int lenght; //2 bytes
    int breadth; //2 bytes
};

int main()
{
    //declare triangle by pointer it be in stack memory
    //to allocate it in heap we must use keyword (new) its only way to allocate in heap
    triangle tr1 = {10,10};
    triangle *t;
    t = &tr1;
    cout << "lenght " <<t->lenght <<endl;
    //access member in struct using pointer
        //first way (->)
        t->lenght = 20;

        //second way (*t).breadth
        (*t).breadth = 20;

     cout << "lenght " <<t->lenght <<endl;
     cout << "breadth " <<(*t).breadth <<endl;

//declare triangle dynamicly using pointer (new)
    triangle *tr2 = new triangle();
    tr2->lenght = 30;
      cout << "lenght " <<tr2->lenght <<endl;
    cout << "Hello world!" << endl;
    return 0;
}
