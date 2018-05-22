#include<iostream>
using namespace std;
int main()
{
int a[100],n,k,i,temp;
cout<<"enter the number"<<endl;
cin>>n;
cout<<"enter the k values"<<endl;
cin>>k;
for(i=0;i<n;i++)
{
    cin>>a[i];
}
for(i=0;i<k;i++)
{
    temp=a[i];
    a[i]=a[i+1];
    a[i+1]=temp;
}
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
return 0;
}
