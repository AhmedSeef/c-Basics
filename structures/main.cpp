#include <iostream>

using namespace std;

//structures user data type
//declare structure

struct triangle{
    int lenght; //2 bytes
    int breadth; //2 bytes
};

//struct 4 bytes total amount of member
int main()
{
    //declare variable of struct

    triangle tri = {10 , 5};
    cout << "lenght " <<tri.lenght <<endl;

    //second declare and intial  variable of struct
    triangle tri1;
    tri1.breadth = 10;
    tri1.lenght = 10;

    //third declare list of struct
    triangle tril[2] = {
    {20,20},{30,30}
    };

    //lop in list
    for(int i=0;i<2;i++){
        cout <<"breadth" <<" " <<tril[i].breadth <<" " << "lenght" << " " << tril[i].lenght <<endl;
    }

    cout << "Hello world!" << endl;
    return 0;
}
