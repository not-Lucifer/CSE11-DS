#include<bits/stdc++.h>
using namespace std;
bool precedence(char a, char b){ 
    if(a=='*' || a=='/'|| a =='^'||a=='%'){
        if(b=='^'){
            return false;
        }
        else{
            return true;
        }
    }
    else if (a=='+' || a=='-'){
        if(b=='+' || b=='-'){
            return true;
        }
        else{
            return false;
        }
    }
    else if(a=='^'){
        return false;
    }

    return true;

}
int main(){
    stack<char> s;
    string str, res = "";
    cin>>str;
    for(int i=0;i<str.size();i++){
        if((str[i]>='0' && str[i]<='9') || (str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            res+=str[i];
        }
        else if(str[i]=='('){
            s.push(str[i]);
        }
        else if(str[i]==')'){
            while(!s.empty() && s.top()!='('){
                res+=s.top();
                s.pop();
            }
            if(!s.empty()){
                s.pop();
            }
        }
        else{
            while(!s.empty() && precedence(s.top(), str[i])){
                res+=s.top();
                s.pop();
            }
            s.push(str[i]);
        }
    }
    while(!s.empty()){
        res+=s.top();
        s.pop();
    }
    cout<<res<<endl;
}