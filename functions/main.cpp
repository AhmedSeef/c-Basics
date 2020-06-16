#include <iostream>

using namespace std;
// function  is a piece of code which performs a specific task
//it used to break large code to small code  taskes

//sample function header
// return type -- name -- (paramater_type  paramater_name,paramater_type2  paramater_name2)



int sum (int a , int b);


//pass by adress
void change (int *a , int *b);

//pass by refrence
void changerefrence (int &a , int &b);

int main()
{
    //pass by vlaue
    int value = sum(1,2);
    cout << value << endl;
    cout << "***********************************" <<endl;

    cout << " pass by address" <<endl;
    int x = 1,y = 2;
    cout << " x and y before call function pass by adress " <<"x:" << x <<" y:" << y <<endl;

    change(&x,&y);
    cout << " x and y after call function pass by adress " <<"x:" << x <<" y:" << y <<endl;

    cout << " pass by refrence" <<endl;
    int d = 1,e = 2;
    cout << " d and e before call function pass by adress " <<"d:" << d <<" e:" << e <<endl;

    changerefrence(d,e);
    cout << " d and e after call function pass by adress " <<"d:" << d <<" e:" << e <<endl;

    cout << "Hello world!" << endl;

    return 0;
}

//sum
int sum (int a , int b){
return a+ b;
}

// change address
void change (int *a , int *b){
int temp;
temp = *a;
*a = *b;
*b = temp;
}

// change refrence
void changerefrence (int &a , int &b){
int temp;
temp = a;
a = b;
b = temp;
}
