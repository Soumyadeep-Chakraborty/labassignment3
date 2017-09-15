#include<iostream>
using namespace std;
int main(){
    int a,b,v=1,c=0;
    float n;
    cout<<"Enter Decimal Number : ";
cin>>n;
for(a=n;a>0;a/=8){
             b=(a%8)*(v);
             c+=b;
             v*=10;}
             cout<<"The Required Octal Number Is : "<<c;

    return 0;}
