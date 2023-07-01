// we can pass structures address also as parameter to other function
// this is called as call by address
#include<iostream>
using namespace std;

struct Rectangle{
int length;
int breadth;
};
int takeStructAsCallByAddress(struct Rectangle *rect){
    return rect->length*rect->breadth;

}
int main(){
    struct Rectangle rectangle;
    rectangle.length = 5;
    rectangle.breadth = 10;
    cout<<"The area of the rectanlge is: "<<takeStructAsCallByAddress(&rectangle);
    return 0;

}