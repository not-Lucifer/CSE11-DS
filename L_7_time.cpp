#include<iostream>
using namespace std;
struct time{
    int hr,min,sec;
};

int main(){
    struct time t1,t2,sum;
    cin>>t1.hr>>t1.min>>t1.sec;
    cin>>t2.hr>>t2.min>>t2.sec;
    sum.hr=t1.hr+t2.hr;
    sum.min=t1.min+t2.min;
    sum.sec=t1.sec+t2.sec;
    if(sum.sec>=60){
        sum.min+=(sum.sec/60);
        sum.sec=sum.sec%60;
    }
    if(sum.min>=60){
        sum.hr+=(sum.min/60);
        sum.min=sum.min%60;
    }
    cout<<sum.hr<<"hr "<<sum.min<<"min "<<sum.sec<<"sec"<<endl;
    
    return 0;
}