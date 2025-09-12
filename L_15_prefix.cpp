#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s;
    string str;
    cin>>str;
    for (int i = str.size() - 1; i >= 0; i--) {
        if (isdigit(str[i])) {
            s.push(str[i] - '0');
        } else {
            int a = s.top(); s.pop();
            int b = s.top(); s.pop();

            switch (str[i]) {
                case '+': s.push(a + b); break;
                case '-': s.push(a - b); break;
                case '*': s.push(a * b); break;
                case '/': s.push(a / b); break;
            }
        }
    }
    cout<<s.top()<<endl;
}