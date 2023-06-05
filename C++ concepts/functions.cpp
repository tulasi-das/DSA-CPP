// functions are set of instruction to perform a specific task
// if all the program is written inside a single function then it is called as monolithic program, if written in multiple funcitons
// then it is called as modular or procedural program

using namespace std;
#include<iostream>
int addition(int number1, int number2){ // signature, prototype, declaration of the function
    int sum = number1+number2;
    return sum; // returning the value
}
int main(){
int number1 = 5;
int number2 = 10;
cout<<"The sum of two numbers is: "<<addition(number1,number2); // function calls are stored in stack memory
}