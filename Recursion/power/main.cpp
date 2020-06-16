#include <iostream>

using namespace std;

double power(double m,int n);
int main()
{
    cout<<power(7,2)<<endl;
    cout << "Hello world!" << endl;
    return 0;
}

double power(double m,int n){
if(n == 0)
    return 1;

 return power(m,n-1)*m;
}

