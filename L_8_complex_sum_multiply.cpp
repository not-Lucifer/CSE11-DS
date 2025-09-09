#include<bits/stdc++.h>
using namespace std;
struct complex1{
    int real,img;
};
int main(){
    struct complex1 c1,c2,sum,product;
    cin>>c1.real>>c1.img;
    cin>>c2.real>>c2.img;
    sum.real=c1.real+c2.real;
    sum.img=c1.img+c2.img;
    product.real=(c1.real*c2.real)-(c1.img*c2.img);
    product.img=(c1.real*c2.img)+(c1.img*c2.real);
    cout<<sum.real<<" + i"<<sum.img<<endl;
    cout<<product.real<<" + i"<<product.img<<endl;

    
    return 0;
}