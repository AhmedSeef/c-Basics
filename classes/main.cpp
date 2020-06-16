#include <iostream>
#include "human.h"

using namespace std;

int main()
{
    //create object human in stack
    human h1;
    cout << "height human1: "<<h1.getheight() <<endl;
    cout << "weight human1: "<<h1.getwieght() <<endl;

    // create object human in heap again access heap by pointer using (new) to allocate --(delete)  to deallocate
    double height;
    double weight;
    cout << "enter your height " <<endl;
    cin >> height;

    cout << "enter your weight " <<endl;
    cin >> weight;

    human *h2 = new human();
    h2->setheight(height);
    h2->setwieght(weight);

    cout << "height human2: "<<h2->getheight() <<endl;
    cout << "weight human2: "<<h2->getwieght() <<endl;

    //print address of h2
    cout << h2 <<endl;

    //deallocate h2 it will remove values from heap but pointer still have its address value because it store in stack
    //value deleted from stack when function out of scope
    delete h2;
    cout << h2 <<endl;


    cout << "Hello world!" << endl;
    return 0;
}
