#include<iostream>
#include<stdlib.h>
using namespace std;
#define MAXQUEUE 10
struct Queue{
    char items[MAXQUEUE];
    int FRONT, REAR;
};
struct Queue q;
void initialize(){
    q.FRONT=-1;
    q.REAR=-1;
}
bool isempty(){
    if(q.REAR==-1)
        return true;
    else
        return false;
}
void Enqueue(char element){
    if(q.REAR==MAXQUEUE-1)
        cout<<"Queue is full"<<endl;
    else{
        if(q.FRONT==-1)
            q.FRONT=0;
        q.REAR++;
        q.items[q.REAR]=element;
        cout<<"Inserted "<<element<<endl;
    }
}
void Dequeue(){
    char element;
    if(isempty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        element=q.items[q.FRONT];
        q.FRONT++;
        if(q.FRONT>q.REAR){
            cout<<"Deleted "<<element<<endl;
            initialize();
        }
        cout<<"Deleted "<<element<<endl;
    }
}

