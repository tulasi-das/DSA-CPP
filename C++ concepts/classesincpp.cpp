#include<iostream>
using namespace std;

class Rectangle{
private: // the variables and functions that are declared under private will be accessible only in the rectable class, you cannot access them from outside of the class
int length, breadth;
public:
void initialise(int l, int b){ // this function is used for initialising the values
    length = l;
    breadth = b;
}
int areaOfRectangle(){ // this function is used for calculating the area of the rectangle
    return length*breadth;
}
};
int main(){
    Rectangle rectangle;
    int length, breadth;
    cout<<"Enter the length of the rectangle: "<< endl;
    cin>>length;
    cout<<"Enter the breadth of the rectanlge: "<< endl;
    cin>>breadth;
    rectangle.initialise(length, breadth);
    cout<<rectangle.areaOfRectangle() << endl;
    return 0;
}
