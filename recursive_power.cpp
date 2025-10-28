#include<bits/stdc++.h>
using namespace std;
int power(int a,int n){
    if(n==0)
        return 1;
    else{
        int x=power(a,n/2);
        if(n%2==0){
            return x*x;
        }
        else
            return x*x*a ;
    }
}

int main(){
    int a,n;
    cout<<"Enter base and exponent: ";
    cin>>a>>n;
    cout<<a<<"^"<<n<<" = "<<power(a,n)<<endl;   
    return 0;
}