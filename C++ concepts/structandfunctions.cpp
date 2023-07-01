#include<iostream>
using namespace std;

struct Rectangle{
int length;
int breadth;
};

void initialiseStructRectagle(struct Rectangle *rect){
    cout<<"Enter the length of the rectangle: "<<endl;
    cin>>rect->length;
    cout<<"Enter the breadth of the rectangle: "<<endl;
    cin>>rect->breadth;
}
int areaOfRectangle(struct Rectangle rect){
    return rect.length * rect.breadth;
}
int main(){
    struct Rectangle rect;
    initialiseStructRectagle(&rect);
    cout<<areaOfRectangle(rect);
    return 0;
}