#include<bits/stdc++.h>
using namespace std;
struct distance
{
    int km ,m;
};


int main(){
    struct distance d1,d2,sum;
    cin>>d1.km>>d1.m;
    cin>>d2.km>>d2.m;
    sum.km=d1.km+d2.km;
    sum.m=d1.m+d2.m;
    if(sum.m>=1000){
        sum.km+=(sum.m/1000);
        sum.m=sum.m%1000;
    }
    cout<<sum.km<<"km "<<sum.m<<"m"<<endl;

    
    return 0;
}