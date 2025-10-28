#include<bits/stdc++.h>
using namespace std;
int power(int a,int n){
    if(n==0)
        return 1;
    else{
        if(n%2==0){
            int half=power(a,n/2);
            return half*half;
        }
        else
            return a*power(a,n-1);
    }
}

int main(){
    int a,n;
    cout<<"Enter base and exponent: ";
    cin>>a>>n;
    cout<<a<<"^"<<n<<" = "<<power(a,n)<<endl;   
    return 0;
}