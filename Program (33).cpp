#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter number ";
cin>>a;
b=a%10;
while(a>9){
           a=a/10;
           
           }
           
           c=(a)+(b);
           cout<<"The sum of first and last digit is "<<c;
           
    return 0;}
