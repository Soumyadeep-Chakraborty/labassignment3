#include<iostream>
using namespace std;
int main(){
    int n,b,c=0,v=1;
    cout<<"Enter Octal Number : ";
    cin>>n;
    while(n!=0){
    b=n%10;
    c+=b*v;
    n/=10;
    v*=8;}
    cout<<"The Required Decimal Is : "<<c;
    
    return 0;}
