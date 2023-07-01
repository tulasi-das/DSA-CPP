#include<iostream>
using namespace std;
class Rectangle{
private:
int lenght, breadth;
public:
Rectangle(int l, int b); // just declaration of the constructor
int area();
int perimeter(); // just declaration of the function, the body will be written out side
~Rectangle();
};
Rectangle::Rectangle(int l, int b){ // writing the body of the function here
    lenght = l;
    breadth = b;
}
int Rectangle::area(){
    return lenght*breadth;
}
int Rectangle::perimeter(){
    return 2*(lenght+breadth);
}
Rectangle::~Rectangle(){

}
int main(){
    Rectangle rectangle(5,10); // the constructor will be called automatically
    cout<<"The area of the rectangle is: "<<rectangle.area()<<endl;
    cout<<"The perimeter of the rectangle is: "<<rectangle.perimeter()<<endl;
    return 0;
}
