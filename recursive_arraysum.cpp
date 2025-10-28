#include<bits/stdc++.h>
using namespace std;

int arraysum(int arr[], int n){
    if(n <= 0)
        return 0;
    return arr[n-1] + arraysum(arr, n-1);
}
int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Sum of array elements: " << arraysum(arr, n) << endl;
        
    return 0;
}