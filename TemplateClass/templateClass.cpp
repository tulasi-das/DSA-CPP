#include<iostream>
using namespace std;
template <class numberOperations> // declaring a template class of type numberoperation, this can be generic and will be decided when the user creates an object to this class
class Arithmetic{
    private:
    numberOperations number1, number2; // declaring variables of type numberOperations
    public:
    Arithmetic(numberOperations number1, numberOperations number2);
    numberOperations multiplication();
    numberOperations addtion();
    numberOperations substraction();

};
template <class numberOperations> // using the template declaration again for the constructors and functions since we are using scope resolution
Arithmetic<numberOperations>::Arithmetic(numberOperations number1, numberOperations number2){
    this->number1 = number1; // this represents the object
    this->number2 = number2; 
}
template <class numberOperations> 
numberOperations Arithmetic<numberOperations>::multiplication(){
    return number1*number2;
}
template <class numberOperations> 
numberOperations Arithmetic<numberOperations>::addtion(){
    return number1+number2;

}
template <class numberOperations> 
numberOperations Arithmetic<numberOperations>::substraction(){
    return number1-number2;
}
int main(){
    Arithmetic<int> arithmetic(6,4);
    cout<<"The addition of two numbers is: " <<arithmetic.addtion()<<endl;
    cout<<"The addition of two numbers is: " <<arithmetic.multiplication()<<endl;
    cout<<"The addition of two numbers is: " <<arithmetic.substraction()<<endl;
    return 0;
}

