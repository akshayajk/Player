#include <iostream>
using namespace std;

int main()
{
   string str;
   int temp1=0,temp2=0;
   cout<<"enter the string";
   cin>>str;
   for(int i=0;i<=str.length();i++)
   {
       temp1=str[0];
       str[0]=str[1];
       str[1]=temp1;
       temp2=str[2];
       str[2]=str[3];
       str[3]=temp2;
   }
   cout<<str;
}
