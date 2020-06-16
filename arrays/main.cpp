#include <iostream>

using namespace std;

int main()
{
    //static array declared in stack memory
    //array  data same type
    int arr[] = {1,2,3,4,5};

    int arr1[5];

    int arr2[5] = {1,2,3,4,5};


    //array adress for first element with array name
    cout << arr <<endl;

    cout << "***************" <<"array adresses" <<endl;
    //array adress for all elemnts
    for(int i=0; i< 5; i++){
        cout << arr+i <<endl;
    }

     cout << "***************" <<"array elemnts" <<endl;
     for(int i=0; i< 5; i++){
         //first way
        cout <<arr[i] <<endl;

        //second way
        cout << *(arr+i) <<endl;
    }

    cout << "Hello world!" << endl;
    return 0;
}
