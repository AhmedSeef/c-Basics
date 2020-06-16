#include <iostream>

using namespace std;
struct shape{
    int lenght; //2 bytes
    int widths; //2 bytes
};

//we can pass  struct by value or by ref
//by value it create new object

int size(shape &shape);
int main()
{
    shape s = {10,20};
    int sizea = size(s);
    cout << sizea <<endl;
    cout << "Hello world!" << endl;
    return 0;
}

int size(shape &shape){
int s = 0;
s = shape.lenght * shape.widths;
}
