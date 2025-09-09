#include<iostream>
#include<map>
using namespace std;

int main(){
    int arr[13]={7,1,2,3,1,2,3,1,4,5,5,1,1};
    map<int,int> mp;
    for (int i = 0; i <13; i++)
    {
       mp[arr[i]]++;
    }
    for(auto it : mp){
        if(it.second%2!=0){
            cout<<it.first<<" ";
        }
    }
    return 0;
}