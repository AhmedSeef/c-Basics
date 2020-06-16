#include <iostream>
using namespace std;

//pointer is variable hold  adress it declare by using (*)
    //memory is 3 types
    //first for code or program
    //second is stack it allocate and deallocate automaticly
    //third is heap it allocate and  deallocate by developer but we cant access it with out pointer so we need to declare pointer
    //its not allowed to access heap directly like stack
    //pointers help us to access heap allocate and deallocate memory in it

    //******Ponter*********\\
    //access heap
    //access devices
    //passing paramters
    //

int main()
{

//declare pointer point to address in stack
int a = 10;
int *b;
//put address in pointer
b = &a;
cout << "value a : " << a <<endl;
cout << "adress b : " << b <<endl;
cout << "value b : " << *b <<endl;

cout << "*********************************" <<endl;
//put value in pointer directly
*b = 20;
cout << "value b after put 20 : " << *b <<endl;
cout << "value a after put 20 : " << a <<endl;
cout << "*********************************" <<endl;


 //declare pointer point to heap address
 //access heap in heap with keyword (new) only
 //s varaible in stack but it point to heap address
 //if we delete s it will deallocate memory in heap but still s in stack
 //s will have random value after delete

 int *s = new int;
 *s = 10;
 cout << "address s: " << s <<endl;
 cout << "value s: " << *s <<endl;

 delete s;
 cout << "address after delete s: " << s <<endl;
cout << "value after delete s: " << *s <<endl;
    cout << "Hello world!" << endl;
    return 0;
}
