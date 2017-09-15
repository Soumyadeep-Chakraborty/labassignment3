#include<iostream>
using namespace std;
int main()
{int a,n,s;
a=1;
s=0;
cout<<"Enter number to find sum ";
cin>>n;
if(n<=0){cout<<"Program can't run";}
else{while(a<=n)
{s+=a;
a=a+2;
      }
      cout<<s;}
      
      return 0;  }
