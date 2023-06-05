// pointers are address variables and these are used to store the address of the variables
// Pointers are used to access the data which is stored out side the main memory
// usually memory is divided into 1.Code execution(code is stored here) 2. Stack memory(arrays, function call stored here)
// 3. Heap Memory
// usually a program doesn't have access to heap memery, so to access heap memory we use pointers.

#include<iostream>
using namespace std;
int main(){
    int number = 5;
    int *addrOfNumber = &number; // we need to have same type of pointer of which we are storing the address, since we are storing the 
    //address of the interger variable we should use integer type pointer variable

    cout<<"The value of the number "<<number<<endl;
    cout<<"The address of number "<<addrOfNumber;

    // Allocating the memory in the heap, we have to use the malloc function
    int newNumber = 10;
    int *newPointer;
    //allocating the memeroy in heap for pointer newNumber
    newPointer =(int *)malloc(sizeof(int));
    newPointer = &newNumber;
    cout<<endl<<*newPointer;
    return 0;

}