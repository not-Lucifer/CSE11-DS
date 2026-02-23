#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int cnt = 0;
    for (int i = 0; i <s.length();i++){
        if(s[i]=='1'){
            cnt++;
        }
        else cnt =0;
        if (cnt == 5){
            s.insert(s.begin()+i+1,'0');
            cnt = 0;
        }
    }
    cout<<s<<endl;
    return 0;
}