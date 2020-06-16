#include <iostream>

using namespace std;

int fact(int num);
int main()
{
    int number ;
    cout << "enter number" <<endl;
    cin>> number;

    cout << "factorial: " <<fact(number)<<endl;
    cout << "Hello world!" << endl;
    return 0;
}


int fact(int num){
if(num <= 1)
    return num;

 return num*(num-1);
}
