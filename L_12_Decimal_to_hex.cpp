#include<bits/stdc++.h>
using namespace std;
stack<char> s;
void dec_to_hex(int n){
    char hex_chars[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    if(n==0){
        return;
    }
    s.push(hex_chars[n%16]);
    dec_to_hex(n/16);
}
int main(){
    int n;
    cin>>n;
    dec_to_hex(n);
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    cout<<endl;
    return 0;
}
