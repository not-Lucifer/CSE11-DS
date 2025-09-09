#include<bits/stdc++.h>
using namespace std;
struct stack1{
    int top;
    int arr[100];
}; 
void initialize(struct stack1 &s){
    s.top=-1;
}
int isfull(struct stack1 &s){
    if(s.top==99){
        return 1;
    }
    return 0;
}  
int isempty(struct stack1 &s){
    if(s.top==-1){
        return 1;
    }
    return 0;
}
void push(struct stack1 &s,int x){
    if(isfull(s)){
        cout<<"Stack Overflow"<<endl;
        return;
    }
    s.top++;
    s.arr[s.top]=x;
}
int pop(struct stack1 &s){
    if(isempty(s)){
        cout<<"Stack Underflow"<<endl;
        return -1;
    }
    int x=s.arr[s.top];
    s.top--;
    return x;
}
int peek(struct stack1 s){
    if(isempty(s)){
        cout<<"Stack Underflow"<<endl;
        return -1;
    }
    return s.arr[s.top];
}
void display(struct stack1 s){
    if(isempty(s)){
        cout<<"Stack Underflow"<<endl;
        return;
    }
    for(int i=s.top;i>=0;i--){
        cout<<s.arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    struct stack1 s;
    initialize(s);
    push(s,10);
    push(s,20);
    push(s,30);
    push(s,80);
    push(s,70);
    push(s,60);
    push(s,50);
    display(s);
    cout<<pop(s)<<endl;
    display(s);
    cout<<peek(s)<<endl;
    return 0;
}