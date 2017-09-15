#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{char a;
cout <<"enter the character ";
cin>>a;
    if(isalpha(a))
    {cout <<"It is an alphabet";}
    else{cout<<"It is not an alphabet";}
           return 0;
}
