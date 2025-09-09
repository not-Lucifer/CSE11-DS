#include<bits/stdc++.h>
using namespace std;
stack<int> s;
void dec_to_bin(int n){ 
    if(n==0){
        return;
    }
    s.push(n%2);
    dec_to_bin(n/2);
}
int main(){
    int n;
    cin>>n;
    dec_to_bin(n);
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    cout<<endl;
    return 0;
}