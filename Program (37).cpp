#include<iostream>
using namespace std;
int main(){
    int a,n,b;
    cout<<"enter number ";
cin>>n;
a=n;
if(a==0){cout<<0;}
else{
while(a!=0){
            b=a%10;
            cout<<b;
            a/=10;}
}

    return 0;}
