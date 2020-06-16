#include <iostream>

using namespace std;

//functions header
void asc(int num);
void des(int num);

int main()
{
	int num;
	cout << "enter num" << endl;
	cin >> num;
	cout << "the values ascending"<<endl;
	asc(num);
	
	cout << "the values desc"<<endl;
	des(num);
	
    
    return 0;
}

void asc(int num)
{
   if(num > 0){
   	asc(num-1);
   	cout << num <<endl;
   }   
}

void des(int num)
{
   if(num > 0){
   	cout << num <<endl;
   	des(num-1);   
   }   
}
