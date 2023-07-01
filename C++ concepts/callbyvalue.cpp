// call by value is just passing the values as parameters, the operations performed inside the called function won't reflect outside

using namespace std;
#include<iostream>
void addtion(int number, int number2){
    number = 5;
    number2 = 6;
}

int main(){
    int number = 10;
    int number2 = 20;
    addtion(number, number2);
    cout<<"First Number is: "<< number<<endl;
    cout<<"Second Number is: "<< number2<<endl;
    return 0;
}