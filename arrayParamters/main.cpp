#include <iostream>

using namespace std;

//create array and return array
int * create(int size);


//pass array and its size also
//we can just pass it as pointer parameter (int *arr, int size)
int sumarr(int arr[],int size);

int main()
{
    int size;
    cout << "enter array size" <<endl;
    cin >> size;
    int *ARR;
    ARR = create(size);
    for(int i=0;i<size;i++){
        int index = i + 1;
        cout << "enter value for " << index << endl;
        cin >> ARR[i];
    }


    int sum = sumarr(ARR,5);
    cout << "array sum :" << sum <<endl;
    cout << "Hello world!" << endl;
    return 0;
}

//sum
int sumarr(int arr[],int size){
int sum = 0;
for(int i =0 ; i< size; i++){
    sum += arr[i];
}
return sum;
}

//create and return array
int * create(int size){
int *p;
p = new int[size];
}
