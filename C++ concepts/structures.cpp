// structures is a collection of members of same data type or different datatype
// when we declare a structure a variable of type structure will be created in the stack memory
#include<iostream>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
};

int main(){
    struct Rectangle rectangle;
    // To give values to the variables which are declared in the structures we have to access them
    // to acces the normal struture variable we use the operator '.'
    rectangle.length = 5;
    rectangle.breadth = 7;
    cout<<"Printing the values of the structures "<< endl;
    cout<< rectangle.length;
    cout<<endl<<rectangle.breadth<<endl;
    cout<<"-------------------------------"<<endl;

    // Array of structures
    // initialising and using array structures
    struct Rectangle rectangle2[2] = {{1,2},{3,4}};
    for(int i=0; i<2;i++){
        cout<< rectangle2[i].length <<" ";
        cout<< rectangle2[i].breadth;
        cout<<endl;
    }
    return 0;
    
}