#include<iostream>
#include<string.h> 
using namespace std;
int main() 
{
char s[50],k;
int i,j,count=1,l;
cout<<"enter the string";
gets(s);
l=strlen(s);
for(i=0;i<l;i++)
{
for(j=i+1;j<l;j++)
if(s[i]==s[j])
{
count++;
k=s[i];
}
}
cout<<k;
return 0;
}
