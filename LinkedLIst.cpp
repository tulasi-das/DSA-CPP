#include<iostream>
using namespace std;
struct node{
    struct node *next;
    int data;
};

void display(struct node *tempPointer){
    struct node *Pointer = tempPointer;
    while(Pointer != NULL){
        cout<<Pointer->data<<" ";
        Pointer = Pointer->next;
    }
    cout<<endl;
}
void RecursiveDisplay(struct node *tempPointer){
    if(tempPointer!=NULL){
        cout<<tempPointer->data<<" ";
        RecursiveDisplay(tempPointer->next);
    }
}
void InsertLinkedList(struct node *tempPointer, struct node *newNode){
    //struct node *Pointer = tempPointer;
    while(tempPointer->next != NULL){
        tempPointer = tempPointer->next;
    }
   tempPointer->next = newNode;
}
int maxElementInLinkedList(struct node *tempPointer){
    if(tempPointer == NULL){
        return 0;
    }
    int max = tempPointer->data;
    while(tempPointer!=NULL){
        if(max < tempPointer->data){
            max = tempPointer->data;
        }
        tempPointer = tempPointer->next;
    }
    return max;
}
int search(struct node *tempPointer, int element){
    if(tempPointer == NULL){
        return 0;
    }
    while(tempPointer!=NULL){
        if(tempPointer->data == element){
            return 1;
        }
        tempPointer = tempPointer->next;
    }
    return 0;
}
int recursiveSearch(struct node *tempPointer, int element){
    if(tempPointer == NULL){
        return 0;
    }
    if(tempPointer->data == element){
        return 1;
    }
    return recursiveSearch(tempPointer->next, element);
}

void insertAtFirst(struct node *tempPointer, struct node *first){
    first->next = tempPointer;
    tempPointer = first;
}

int main(){
    struct node *ptr;
    // ptr = (struct node *)malloc(sizeof(node));
    ptr = new node;
    ptr->data = 5;
    ptr->next = NULL;
    display(ptr);
    struct node *newNode;
    newNode = new node;
    newNode->data = 10;
    newNode->next = NULL;
    InsertLinkedList(ptr,newNode);
    display(ptr);
    RecursiveDisplay(ptr);
    cout<<endl;
    cout<<"Max element in the Linked list is: "<<maxElementInLinkedList(ptr);
    cout<<endl;
    if(search(ptr,2)){
        cout<<"Element found";
    }else{
        cout<<"Element not found";
    }
    cout<<endl<<"Recursive search: ";
     if(recursiveSearch(ptr,5)){
        cout<<"Element found";
    }else{
        cout<<"Element not found";
    }
   // display(ptr);
}