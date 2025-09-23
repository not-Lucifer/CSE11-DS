#include<bits/stdc++.h>
using namespace std;
void traverse(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insert(int arr[], int &n, int x, int pos){
    if(pos<0 || pos>n){
        cout<<"Invalid position"<<endl;
        return;
    }
    for(int i=n-1;i>=pos;i--){
        arr[i+1] = arr[i];
    }
    arr[pos] = x;
    n++;
}
void deletion(int arr[], int &n, int pos){
    if(pos<0 || pos>=n){
        cout<<"Invalid position"<<endl;
        return;
    }
    for(int i=pos;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    n--;
}
int main(){
    int arr[100];
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array elements are: ";
    traverse(arr, n);
    int x, pos;
    cout<<"Enter the element to be inserted and position: ";
    cin>>x>>pos;
    insert(arr, n, x, pos);
    cout<<"Array elements after insertion: ";
    traverse(arr, n);
    cout<<"Enter the position of element to be deleted: ";
    cin>>pos;
    deletion(arr, n, pos);
    cout<<"Array elements after deletion: ";
    traverse(arr, n);
    return 0;
}