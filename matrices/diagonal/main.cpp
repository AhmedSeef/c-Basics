#include <iostream>

using namespace std;

struct diagonal{
int *arr;
int size;
};

void setEl(diagonal *d,int i,int j,int x);

int getEl(diagonal *d,int i,int j);

void display(diagonal *d);

int main()
{
    diagonal d;
    cout << "enter diagonal diminsion" <<endl;
    cin >> d.size;
    d.arr = new int[d.size];




    for(int i=1 ;i<=d.size;i++){
        int temp;
        cout << "enter value " <<endl;
        cin >> temp;
        setEl(&d,i,i,temp);
    }


    display(&d);


    return 0;
}


void setEl(diagonal *d,int i,int j,int x){
if(i==j)
    d->arr[i-1] = x;
}

int getEl(diagonal *d,int i,int j){
if(i==j)
    return d->arr[i-1];
 return 0;
}

void display(diagonal *d){
cout << "the diagonal values" <<endl;

for(int i =0;i< d->size;i++){
        for(int j=0;j<d->size;j++){
            if (i == j)cout << d->arr[i];
           else cout <<0;
        }
   cout <<endl;
}
}
