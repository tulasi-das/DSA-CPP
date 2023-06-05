// To access the values of the structure using pointer we have to use -> operator or (*pointer).member
#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    struct Rectangle rectangle = {10,20}; // declaring and initialising the structure
    struct Rectangle *rectPointer = &rectangle; // storing the address of rectanle(type is struct Rectangle) into a pointer rectPointer of type
    // struct Rectanle
    cout<<rectPointer->length << endl;
    cout<<rectPointer->breadth<<endl;
    return 0;

}