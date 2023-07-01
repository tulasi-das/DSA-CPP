// constructors are default methods which are present in the classes, whenever we use them in the class these will get called by automatically when we create an object
// the constructors in cpp will have the same as the class name
using namespace std;
#include<iostream>
class Rectangle{
private:
int length, breadth;
public:
Rectangle(int l, int b){ // this is a constructor which has the same name as the class name
    length = l;
    breadth = b;
}
int area(){
    return length*breadth;
}
};
int main(){
    Rectangle rectanlge(10,20); // the constructor Rectangle in the class Rectangle will automatically gets called here
    cout<<"The area of the rectangle is: "<<rectanlge.area();
    return 0;

}