#include <iostream>

using namespace std;

//recursion mean function call it self

//function header
int sum(int n);

int main()
{
    int number;
    cout << "enter number" <<endl;
    cin >> number;

    cout << "the sum value is: " <<sum(number) <<endl;
    cout << "Hello world!" << endl;
    return 0;
}

//function implementation
int sum(int n){

if(n != 0)
        return n + sum(n - 1);
    return 0;
}
