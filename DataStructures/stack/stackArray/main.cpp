#include <iostream>
#include "stack.h"

using namespace std;


//this project create stack using array
int main()
{
    stack<int> sta(10);

    sta.stackTop();
     sta.push(2);
     sta.push(2);
     sta.push(3);
     sta.push(3);
     sta.push(4);
     sta.push(3);
     sta.pop();

    sta.stackTop();

    return 0;
}
