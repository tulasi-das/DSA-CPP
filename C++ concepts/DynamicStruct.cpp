using namespace std;
#include<iostream>
struct Rectangle{
    int length;
    int breadth;
};
int main(){
struct Rectangle *rectangle; // creating a pointer variable of type struct Rectangle
rectangle = (struct Rectangle *)malloc(sizeof(struct Rectangle)); // allocating the memory
rectangle->length = 5;
rectangle->breadth = 10;
cout<<rectangle->breadth<<endl;
cout<<rectangle->length<<endl;
return 0;
}