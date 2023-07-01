using namespace std;
#include<iostream>
struct Rectangle{
int length;
int breadth;
};
int structAsParam(struct Rectangle rectangle){
return rectangle.length*rectangle.breadth;
}
int main(){
    struct Rectangle rectangle;
    rectangle.length = 5;
    rectangle.breadth = 10;
    cout<< "The area of the rectangle is: "<< structAsParam(rectangle); // passing rectangle which of type struct rectangle as parameter to the function structAsParam
    return 0;
}