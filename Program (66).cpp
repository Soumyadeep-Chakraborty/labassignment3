#include<iostream>
using namespace std;
int main(){
    int a,b,v=1,c=0;
    float n;
    cout<<"Enter Decimal Number : ";
cin>>n;
for(a=n;a>0;a/=2){
             b=(a%2)*(v);
             c+=b;
             v*=10;}
             cout<<"The Required Binary Number Is : " <<c;

    return 0;
    
    }
