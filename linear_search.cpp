#include<bits/stdc++.h>
using namespace std;
int linearsearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i; 
        }
    }
    return -1;
}

int main(){
    int n, x;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> x;
    int result = linearsearch(arr.data(), n, x);
    cout<<result<<endl;
    
    return 0;
}