#include<iostream>
using namespace std;

int* returnArray(int array[], int length){ // we need to return the address of the array, since address will be stored in pointer variables we use * operator
    for(int i=0;i<length;i++){
        array[i] = i;
    }
    return array;

}
int main(){
int *array; // since the function returnArray will return the address of array, which should be stored in pointer varibale, so to store the value we use this variable

int arrays[5];
array = returnArray(arrays, 5);
for(int i=0;i<5;i++){
    cout<<array[i]<<endl;
}
return 0;
}