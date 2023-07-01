// here we are not passing the values but we are passing the addresses of the variables
// this is also called as call by address or pass by address

using namespace std;
#include<iostream>

void swap(int *addressOfNumber1, int *addressOfNumber2){
    int temp = *addressOfNumber1;
    *addressOfNumber1 = *addressOfNumber2;
    *addressOfNumber2 = temp;
}

int main(){
    int number1= 10;
    int number2 = 20;
    cout<<"Number1 before calling the function: "<<number1<<endl;
    cout<<"Number2 before calling the function: "<< number2<<endl;
    swap(&number1, &number2);
    cout<<"Number1 after calling the function: "<<number1<<endl;
    cout<<"Number2 after calling the function: "<< number2<<endl;
    return 0;

}