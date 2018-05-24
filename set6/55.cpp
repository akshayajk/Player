#include<iostream>
using namespace std;
int main()
{
 string s,t;
 int count=0;
 cin>>s;
 cin>>t;
 int a=s.length();
 int b=t.length();
 if(a==b)
 {
 for(int i=0;i<a;i++)
 {
 if(s[i]==t[i])
 {
 count=count+1;  
 }
 }
 }
 if(count==a)
 {
 cout<<"yes";
 }
 else
 {
 cout<<"no";
 }
  
}
