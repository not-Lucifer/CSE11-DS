#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n<=2)
        return n-1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;    
    return 0;
}