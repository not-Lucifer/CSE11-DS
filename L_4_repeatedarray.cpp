#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[9]={1,2,2,3,4,4,5,6,7};
    int large=10;
    int DAT[large+1]={0};
    for(int i =0;i<large-1;i++){
        DAT[arr[i]]+=1;
    }
    for(int i=1;i<=large;i++){
        if(DAT[i]>1){
            cout<<i<<endl;
        }
    }
    return 0;
}