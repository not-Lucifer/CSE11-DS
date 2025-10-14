#include<bits/stdc++.h>
#include"listheader.hpp"
using namespace std;

void searchElement(Node *head, int key){
    Node *current=head;
    int pos=1;
    while(current!=NULL){
        if(current->info==key){
            cout<<"Element "<<key<<" found at position "<<pos<<endl;
            return;
        }
        current=current->Next;
        pos++;
    }
    cout<<"Element "<<key<<" not found in the list"<<endl;
}


int main(){
    Node *head=NULL;
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        int x; cin>>x;
        InsEnd(&head,x);
    }
    int key;
    cout<<"Enter element to search: ";
    cin>>key;
    searchElement(head,key);
    

    
    return 0;
}