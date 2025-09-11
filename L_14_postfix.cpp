#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s;
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++){
        if(str[i]>='0' && str[i]<='9'){
            s.push(str[i]-'0');
        }
        else{
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            switch(str[i]){
                case '+':
                    s.push(b+a);
                    break;
                case '-':
                    s.push(b-a);
                    break;
                case '*':
                    s.push(b*a);
                    break;
                case '/':
                    s.push(b/a);
                    break;
            }

        }
    }
    cout<<s.top()<<endl;
}