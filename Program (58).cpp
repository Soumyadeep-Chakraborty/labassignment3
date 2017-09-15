#include <iostream>
using namespace std;
int main()
{
        int len,i;
        char bin[17],ones[17];
        cout<<"ENTER BINARY NUMBER (maximum 16 bits): ";
        cin>>bin;
        for(len=0;bin[len]!='\0';len++);
        for(i=0;i<len;i++)
        {
                if(bin[i]=='0')
                    ones[i]='1';
                else
                    ones[i]='0';
                
        }
 
        cout<<"ONE'S COMPLEMENT: "<<ones;
        
        return 0;
}
