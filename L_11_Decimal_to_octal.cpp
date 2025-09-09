#include<bits/stdc++.h>
using namespace std;
stack<int> s;
void dec_to_oct(int n){ 
    if(n==0){
        return;
    }
    s.push(n%8);
    dec_to_oct(n/8);
}
int main(){
    int n;
    cin>>n;
    dec_to_oct(n);
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    cout<<endl;
    return 0;
}