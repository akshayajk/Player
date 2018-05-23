#include<iostream>
using namespace std;
int main()
{
 int n,mul=1,i,j,flag=0;
 cin>>n;
 for(i=0;i<=n;i++)
 {
     for(j=i;j>0;j--)
     {
     mul=mul*2;
     if(mul==n)
     {
    flag=1;
    break;
     }
     }
 }
 if(flag==1)
     {
         cout<<"yes";
         
     }
         else
         {
         cout<<"no";
     }
}
