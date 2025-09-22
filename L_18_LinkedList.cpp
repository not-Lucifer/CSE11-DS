#include<bits/stdc++.h>
using namespace std;
struct node
{
    char info;
    struct node* next;
};

struct node* start;

node* getnode(char x){
    struct node* p;
    p = new node();
    p->info = x;
    p->next = NULL;
    return p;
}

void insert_beg(char x){
    struct node* p;
    p = getnode(x);
    if(start==NULL){
        start = p;
    }
    else{
        p->next = start;
        start = p;
    }
}
void traverse(){
    struct node* p;
    p = start;
    while(p!=NULL){
        cout<<p->info<<" ";
        p = p->next;
    }
    cout<<endl;

}
void insert_end(char x){
    struct node* p, *q;
    p = getnode(x);
    if(start==NULL){
        start = p;
    }
    else{
        q = start;
        while(q->next!=NULL){
            q = q->next;
        }
        q->next = p;
    }
}
// ********************************************
int count_nodes(){
    struct node* p;
    int c = 0;
    p = start;
    while(p!=NULL){
        c++;
        p = p->next;
    }
    return c;
}
// ******************************************************************

int middleelement(){
    struct node* p, *q;
    p = start;
    q = start;
    if(start==NULL){
        return -1;
    }
    else{
        while(q!=NULL && q->next!=NULL){
            p = p->next;
            q = q->next->next;
        }
        cout<< p->info<<endl;
        return 0;
    }
}

int main(){
    start = NULL;
    insert_beg('A');
    insert_beg('B');
    insert_beg('C');
    traverse();
    insert_end('D');
    insert_end('E');
    traverse();
    cout<<count_nodes()<<endl;
    middleelement();

    
    return 0;
}