#include<bits/stdc++.h>
using namespace std;
vector<int> divisionHash(int arr[], int n, int tableSize) {
    vector<int> hashTable(tableSize, -1);
    for (int i = 0; i < n; i++) {
        int index = arr[i] % tableSize;
        while (hashTable[index] != -1) {
            index = (index + 1) % tableSize;
        }
        hashTable[index] = arr[i];
    }
    return hashTable;
}

int main(){
    int n, tableSize;
    cin >> n >> tableSize;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> hashTable = divisionHash(arr, n, tableSize);
    for (int i = 0; i < tableSize; i++) {
        cout << hashTable[i] << " ";
    }    
    return 0;
}