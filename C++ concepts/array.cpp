// array is a collection of same data type
// arrays are stored in stack memory
// in C language you cannot initialise a variable size array, you need to  specifuy the size of the array while declaration

#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    //using for loop
    cout<<"using for loop "<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i] <<" ";
    }
    cout<<endl<<"using for each loop "<<endl;
    // using for each loop
    for(int element: arr){
        cout<<element<< " ";
    }
    return 0;
}