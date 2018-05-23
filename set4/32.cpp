#include<iostream>
using namespace std;
int main()
{
    int a[10],k,n,i,j,temp,flag=0;
    cin>>n;
    cin>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
     {
            if(a[i]==k)
            {
                flag=1;
            }
            }
    
    if(flag==1)
    {
        cout<<"yes";
    }else 
    {
    cout<<"no";
    }
}
