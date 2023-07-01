// we can pass array as parameter to a different function
using namespace std;
#include<iostream>
void takeArrayAsParam(int array[], int length){
    for(int i=0;i<length;i++){
        cout<< array[i]<<endl; // Printing arrays
    }
}
int main(){
    int array[] = {1,2,3,4,5};
    takeArrayAsParam(array,5);
    return 0;
}