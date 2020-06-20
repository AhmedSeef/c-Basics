#include <iostream>
#include "stackl.h"

using namespace std;

int main()
{
    stackL<int> stL;
    cout << stL.stackIsEmpty() <<endl;
    stL.push(2);
    cout << stL.stackIsEmpty() <<endl;
    stL.stackTop();
    stL.pop();
    cout << stL.stackIsEmpty() <<endl;

    return 0;
}
