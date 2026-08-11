#include<iostream>
using namespace std;
int main(){
    int *arr;
    int size;
    cout<<"Enter the size of array";
    cin>>size;
    cout<<"Creating array";
    arr=new int[size];
    cout<<"Enter value of array";
    for(int i=0;i<size;i++)
    {
        cin>>arr[1];

    }
    delete arr;
    cout<<"display arr";
    for(int i=0;i<size;i++)
    {
        cout<<" "<<arr[1];

    }
    return 0;
}