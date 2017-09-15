#include<iostream>
using namespace std;
int main(){
    int a,n,b,c=0,y=2;
    cout<<"Enter Binary Number : ";
    cin>>n;
       while(n!=0){
  b=n%10;              
    c+=(b*y);            
         y*=2;       
         n/=10;    }   
                
            cout<<"The Decimal Number Is : "<< c;    

    return 0;}

