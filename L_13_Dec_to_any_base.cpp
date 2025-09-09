#include<bits/stdc++.h>
using namespace std;
stack<char> s;
void dec_to_any(int n,int base){
    char chars[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    if(n==0){
        return;
    }
    s.push(chars[n%base]);
    dec_to_any(n/base,base);
}
int main(){
    int n,base;
    cin>>n>>base;
    dec_to_any(n,base);
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    cout<<endl;
    return 0;
}