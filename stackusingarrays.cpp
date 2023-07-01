#include<iostream>
#include<cstring>
using namespace std;
struct stack{
    int top;
    int size;
    int *arr;
};
struct stackForChar{
    int top;
    int size;
    char *s;
};
bool isEmpty(struct stack *st){
    if(st->top == -1){
        return true;
    }
}
bool isFull(struct stack *st){
    if(st->top == st->size-1){
        return true;
    }
}
void push(struct stack *st, int element){
    if(!isFull(st)){
        st->top++;
        st->arr[st->top] = element;
    }else{
        cout<<"Stack is full";
    }

}
int pop(struct stack *st){
    if(!isEmpty(st)){
       return st->arr[st->top--];
    }else{
        cout<<"Stack is empty";
    }
}
int peek(struct stack *st, int position){
    int element = -1;
    if((st->top-position + 1)<1){
        cout<<"Invalid postion: ";
        return element;
    }else{
        element = st->arr[(st->top-position)+1];
        return element;
    }
}
stackForChar isBalance(char *par){
   struct stackForChar st;
   st.top = -1;
   st.size = strlen(par);
   st.s = new char(st.size);
   for(int i=0;par[i]!='\0';i++){
     if(par[i] == '('){
    if(st.top!=st.size-1){
        st.top++;
        st.s[st.top] = '(';
    }
     if(par[i] == ')'){
    if(st.top!= -1){
        st.s[st.top] = 0;
        st.top--;
    }

     }
   }
   }
   return st;
}
int main(){
//     struct stack *st;
//     st = new stack;
//     st->size = 5;
//     st->top = -1;
//     st->arr = new int(st->size);
//     push(st,5);
//     push(st,6);
//     push(st,7);
//    // cout<<pop(st);
//    cout<<peek(st,2);
struct stackForChar st;
   char parantheris[] = {'(','(','a','+','b',')',')'};
  st =  isBalance(parantheris);
return 0;
}