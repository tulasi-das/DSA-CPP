#include<iostream>
using namespace std;
// struct Rectangle{
//     int length;
//     int breadth;
// };

// int addition(int number1, int number2){
//     return number1+number2;
// }
// int swap(int number1, int number2){
//     //call by value
//     int temp = number1;
//     number1 = number2;
//     number2 = temp;
// }

// int swap(int &number1, int &number2){
    //call by reference
//     int temp = number1;
//     number1 = number2;
//     number2 = temp;
//     
// }

// int swap(int *number1, int *number2){
//     // call by address
//     int temp = *number1;
//     *number1 = *number2;
//     *number2 = temp;
// }
// void arrAsParam(int arr[], int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int* returnPtrToAnArray(){
//     int *ptr = new int(5);
//     for(int i=0;i<5;i++){
//         ptr[i] = i;
//     }
//     return ptr;
// }

// int area(struct Rectangle rec){
//     // call by value
//     return rec.length*rec.breadth;
// }
// int area(struct Rectangle *rec){
//     // call by address
//     return rec->length*rec->breadth;
// }

class Rectangle{
    //we can also define the body of the functions outside of the class and these functions can be defined(i,e body of the function can be defined using scope resolution operator)
    private: 
    int length, breadth;
    public:
    Rectangle(int length, int breadth){
        this->length = length;
        this->breadth = breadth;
    }
    void initialise(int length, int breadth){
        this->length = length;
        this->breadth = breadth;
    }
    int area(){
        return (this->length * this->breadth);
    }
    int Permiter(){
        return 2*(this->breadth + this->length);
    }
    int changeLength(int length){
        this->length = length;
    }
    int changeBreadth(int breadth){
        this->breadth = breadth;
    }
};

// recursion
// void recursion(int number){
//     if(number==0){
//         return;
//     }
//     cout<<number<<endl;
//     recursion(number-1);
// }
// int recursion2(int number){
//     static int x = 0;
//     if(number>0){
//         x++;
//        return recursion2(number-1)+x;
//     }
//     return 0;
// }
// int* arrayRev(int arr[], int low, int high){
//     int *p = arr;
//     while(low<=high){
//         int temp = p[low];
//         p[low] = p[high];
//         p[high] = temp;
//         low++;
//         high--;
//     }
//     return p;
// }
// Diagonal Matrix
// void setElement(int arr[], int row, int column, int element){
//     if(row==column){
//         arr[row-1] = element;
//     }else{
//         arr[row-1] = 0;
//     }
// }
// int getElement(int arr[], int row, int column){
//     if(row == column){
//         return arr[row-1];
//     }
// }

// lower triangual matrix
// void setElement(int *arr, int row, int column, int element){
//    if(row>=column){
//     arr[(row*(row-1))/2 + (column-1)] = element;
//    }
// }
// int getElement(int *arr, int row, int column){
//    if(row>=column){
//     return arr[(row*(row-1))/2 + (column-1)];
//    }
// }
int main(){
    // Arrays
    // int arr[] = {1,2,3,4,4};
    // for(int element: arr){
    //     cout<< element << " ";
    // }

    // int size;
    // cin>>size;
    // int arr[size]; // cannnot declare a variable size array

    // struct Rectangle rec  = {10 ,20}; // initialising the values
    // cout<<"The length is: "<<rec.length<<endl;
    // cout<<"The breadth is: "<<rec.breadth<<endl;

    // array of structure
    // struct Rectangle rec[2] = {{1,2}, {4,6}};
    // cout<<"Length: "<<rec[0].length<<" Breadth: "<<rec[0].breadth<<endl;
    // cout<<"Length: "<<rec[1].length<<" Breadth: "<<rec[1].breadth<<endl;

    // Pointers are used to store the address of another variable
    // To access the memery in heap we use pointers 

    // int number = 5;
    // int *pointer = &number;
    // cout<<"pointer: "<<pointer<<endl;
    // cout<<"value at Pointer: "<<*pointer;

    //Pointer to an array

    // int arr[5] = {1,2,3,4,5};
    // int *ptrToArray = arr;
    // cout<<ptrToArray[1];

//     int *pointer = new int(4); // creating a pointer in heap memory
//     pointer[0] = 0;
//     pointer[1] = 1;
//     pointer[2] = 2;
//     pointer[3] = 3;
// cout<<pointer[0];

        //Reference - reference is nothing but nick name, system won't create any new variable in the memory rather same variable can be
        // used with nick name

    //     int number = 5;
    //     int &nickNameNumber = number;
    // nickNameNumber++;
    // cout<<nickNameNumber;


    // Pointet to a structure 

    // struct Rectangle rec = {20,30};
    // struct Rectangle *prtToStruct = &rec;
    // cout<<prtToStruct->length<<endl; // to access the members of structure using pointers we need to use -> operator
    // cout<<prtToStruct->breadth<<endl;

    // Dynamic memory allocation for structures

    // struct Rectangle *ptr = new Rectangle; // dynamic memory allocation of the structure in c++

    // ptr->length = 1;
    // ptr->breadth = 2;
    // cout<<ptr->breadth<<endl<<ptr->length;


    // Functions
    //Functions are used to perform a specific task
    // If all the code is written inside one function then that type of function, then that type of programming is called as monolithic programming
    // If the code is written inside the functions then that type of functions are called as modular

    // int number1 = 5;
    // int number2 = 10;
    // cout<<"The addition of two numbers is: " <<addition(number1, number2);

    // call by value

    // int number1 = 5;
    // int number2 = 10;
    // cout<<"Numbers before calling the function: "<<endl;
    // cout<<number1 <<" "<<number2<<endl;
    // swap(number1,number2);
    // cout<<"Numbers after calling the function: "<<endl;
    // cout<<number1 <<" "<<number2;

    // Call by reference

    // int number1 = 5;
    // int number2 = 10;
    // cout<<"Numbers before calling the function: "<<endl;
    // cout<<number1 <<" "<<number2<<endl;
    // swap(number1,number2);
    // cout<<"Numbers after calling the function: "<<endl;
    // cout<<number1 <<" "<<number2;

        // Call by address

    // int number1 = 5;
    // int number2 = 10;
    // cout<<"Numbers before calling the function: "<<endl;
    // cout<<number1 <<" "<<number2<<endl;
    // swap(&number1,&number2); // sending the address of number1 and number2 as parameter
    // cout<<"Numbers after calling the function: "<<endl;
    // cout<<number1 <<" "<<number2;

    // Array as parameter
    // Array can be only passed as parameter
    // int arr[] = {2,3,4,5,6};
    // arrAsParam(arr, 5);


    // Returning the pointer to an array
    // int *ptrToAnArray;
    // ptrToAnArray = returnPtrToAnArray();
    // for(int i=0;i<5;i++){
    //     cout<<ptrToAnArray[i]<<" ";
    // }

    // structure as paramter
    // struct Rectangle rec = {10,20};
    // cout<<area(&rec);

    // class
    // Rectangle rec;
    // rec.initialise(5,6);
    // cout<<"The area of the rectangle is: "<< rec.area()<<endl;
    // cout<<"The perimeter of the rectangle is: "<< rec.Permiter()<<endl;

    // constructors
    // constructors are called whenever the class gets called by default
    // Rectangle rec(10, 20); // constructors gets uatomatically called here since we are creating an object
    //     cout<<"The area of the rectangle is: "<< rec.area()<<endl;
    // cout<<"The perimeter of the rectangle is: "<< rec.Permiter()<<endl;


    // if you want to use the same function names and having same parameters which is usaully not allowed, then you can enclose these functioins/classed inside namespaces, by using the namespaces you can access the classes and functions
    // The memory in the heap can be allocated by using the pointers, when you don't need the memory, you should to deallocate the memory

    // Types of data structures: 1.Physical data structure : thees are the data structures which are provided by the compiler or C++ (arrays, Linked list)
    //                           2.Logical data structure : by arranging or ordering the physical data structure in some order we can achieve logical data structures(stacks,queues,trees,graphs,hashtables)


    // Time and space complexity: if you want to travese through an array then the time complexity will be o(n) --> becuase an array can have n elements
    // For each element if you are travesing through the array, then there will be n elements and you have to traverse n times, so the time complexity is o(n2)
    // log(n)(base 2) --> for binary search


    // Recursions: a function calling within itself is called as recursion
    // we need a base condition to terminate recursion when we met a certain condition
    // syntax:
    // type func(paramter){
        //if <base condition>
        // terminate
        // func(paramter)
    //}
    // printing first five numbers
    // int number = 5;
    // // recursion(number);
    // // cout<<recursion2(5);
    // int arr[] = {1,2,3,4};
    // int *p = arrayRev(arr,0,3);
    // for(int i=0;i<4;i++){
    //     cout<<p[i];
    // }

// diagonal matrix
    // int arr[5] = {};
    // int element;
    //  cout<<"Enter the eleemnt"<<endl;
    // for(int i=1; i<=5;i++){
    //     for(int j=1;j<=5;j++){  
    //             cin>>element;
    //             setElement(arr, i,j,element);
    //     }
    // }
    //  for(int i=1; i<=5;i++){
    //     for(int j=1;j<=5;j++){
    //         if(i==j){
    //             cout<<getElement(arr, i,j)<<" ";
    //         }else{
    //             cout<<"0"<<" ";
    //         }
    //     }
    //     cout<<endl;
  //  }

  // Triangular matrix
//   int dimention;
//   int element;
//   cout<<"Enter the dimention of the array"<<" ";
//     cin>>dimention;
//     int *arr = new int(dimention);

//     cout<<"Enter elements into the array"<<" "<<endl;
//     for(int i=1;i<=dimention;i++){
//         for(int j=1;j<=dimention;j++){
//             cin>>element;
//             setElement(arr,i,j,element);
//         }
//     }
//     cout<<"the elements are"<<endl;
//      for(int i=1;i<=dimention;i++){
//         for(int j=1;j<=dimention;j++){
//             if(i<=j){
//                cout<<getElement(arr,i,j)<<" ";
//             }else{
//                 cout<<"0"<<" ";
//             }
//         }
//         cout<<endl;
//     }
Rectangle *r = new Rectangle(2,2);
cout<<r->area();

    return 0;
}