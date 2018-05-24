#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int n,i,j,BA;
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
    cin>>a[i];
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        BA=a[i]&a[j];
    }
}
cout<<BA;
}
