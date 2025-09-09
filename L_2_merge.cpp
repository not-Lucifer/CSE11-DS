#include<bits/stdc++.h>
using namespace std;
vector<int> merge(vector<int> a, vector<int> b,int m,int n){
    vector<int> c;
    int i = 0;
    int j = 0 ;
    while (i<m && j<n)
    {
        if (a[i]<b[j]){
            c.push_back(a[i]);
            i++;
        }
        else{
            c.push_back(b[j]);
            j++; 
        }
    }
    while (i<m){
        c.push_back(a[i]);
        i++;
    }
    while (j<n){
        c.push_back(b[j]);
        j++;
    }
    return c;

}

int main(){
    vector<int> a,b;
    int m,n;
    cin>>m;
    for (int i = 0; i < m; i++)
    {
        int k;
        cin>>k;
        a.push_back(k);
    }
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin>>k;
        b.push_back(k);
    }
    vector<int> c = merge(a,b,m,n);
    for(auto it:c){
        cout<<it<<" ";
    }
    return 0;
}