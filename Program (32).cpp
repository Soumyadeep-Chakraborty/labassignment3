#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter number ";
cin>>a;
b=a%10;
while(a>9){
           a=a/10;
           
           }
                     cout<<"The first digit is "<<a<<" and the last digit is "<<b;
           
    return 0;}
