#include<iostream>
#include"myqueue.hpp"
using namespace std;
int main(){
    initialize();
    Dequeue();
    Enqueue('A');
    Enqueue('B');
    Enqueue('C');
    Enqueue('D');
    Enqueue('E');
    Enqueue('F');

    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();

    
    return 0;
}