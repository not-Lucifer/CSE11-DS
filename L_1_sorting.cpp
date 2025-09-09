#include<bits/stdc++.h>
using namespace std;
static bool cmp(int x , int y){
    if (x%2==0 && y%2!=0) return true;
    if (x%2!=0 && y%2==0) return false;
    if(x%2==0 && y%2==0) return x>y;
    if(x%2!=0 && y%2!=0) return x<y;
}

int main(){
    vector<int> v;
    cout<< v.size()<<endl;
    v.push_back(4);
    cout<<v.capacity()<<endl;
    v.push_back(5);
    cout<<v.capacity()<<endl;
    v.push_back(10);
    cout<<v.capacity()<<endl;
    v.push_back(5);
    cout<<v.capacity()<<endl;
    v.push_back(10);
    cout<<v.capacity()<<endl;
    v.push_back(5);
    cout<<v.capacity()<<endl;
    v.push_back(10);
    cout<<v.capacity()<<endl;
    v.push_back(5);
    cout<<v.capacity()<<endl;
    v.push_back(25);
    cout<<v.capacity()<<endl;
    v.push_back(10);
    cout<<v.capacity()<<endl;
    v.push_back(5);
    cout<<v.capacity()<<endl;
    v.push_back(545);
    cout<<v.capacity()<<endl;
    v.push_back(5);
    cout<<v.capacity()<<endl;
    v.push_back(65);
    cout<<v.capacity()<<endl;
    v.push_back(5);
    cout<<v.capacity()<<endl;
    cout<<endl;
    cout<<v.size()<<endl;
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    // int size;
    // cout<<"Enter size of array:";
    // cin>>size;
    // vector<int> v1(size);
    // for(int i =0;i<size;i++){
    //     cin>>v1[i];

    // }
    // cout<<endl<<"The array is :";
    // for(auto it:v1){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    sort(v.begin(),v.end(),cmp);
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;

    
    return 0;
}