#include<bits/stdc++.h>
using namespace std;
struct queue1{
    int size;
    int front;
    int rear;
    int *Q;
};
queue1 *q;
void initialize(queue1 *q,int size){
    q->size=size;
    q->front=q->rear=0;
    q->Q=new int[size];
}

bool isempty(queue1 *q){
    return q->front==q->rear;
}

int enqueue(queue1 *q,int x){
    if((q->rear+1)%q->size==q->front){
        cout<<"Queue is full"<<endl;
    }
    else{
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
    }
    return 0;
}

int dequeue(queue1 *q){
    int x=-1;
    if(isempty(q)){
        cout<<"Queue is empty"<<endl;
    }
    else{
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;
}


int main(){
    q=new queue1;
    initialize(q,5);
    enqueue(q,10);
    enqueue(q,20);
    enqueue(q,30);
    enqueue(q,40);
    enqueue(q,50);
    cout<<dequeue(q)<<endl;
    
    return 0;
}