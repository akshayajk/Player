
#include<iostream>
using namespace std;
int main()
{
string str;
int count=0;
cin>>str;
for(int i=0;str[i]!='\0';i++)
{
if(str[i]>='0'&&str[i]<='9')
{
    count=1;
}
else
{
    count=0;
    break;
}
}
if(count==1)
{
    cout<<"yes";
}
else
{
    cout<<"no";
}
return 0;
    
}
