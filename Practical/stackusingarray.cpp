#include<bits/stdc++.h>
using namespace std;
class Stack{
    int top;
    int arr[100];
    public:
    Stack(){
        top = -1;
    }
    void push(int x){
        if(top == 99){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        arr[++top] = x;
    }
    void pop(){
        if(top == -1){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        top--;
    }
    int peek(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty(){
        return top == -1;
    }
    void display(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
            return;
        }
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"Stack elements are: ";
    s.display();
    cout<<"Top element is: "<<s.peek()<<endl;
    s.pop();
    cout<<"Stack elements after pop: ";
    s.display();    
    return 0;
}