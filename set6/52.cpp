#include<iostream>
using namespace std;
int main()
{
   int n,k;
   cin>>n;
   cin>>k;
   int a[n],i,j;
   for(i=0;i<=n;i++)
   {
   cin>>a[i];
   }
   for(i=1;i<=n;i++)
   {
       for(j=i+1;j<=n;j++)
       {
                if(a[i]>a[j])
         {
             int temp=a[i];
             a[i]=a[j];
             a[j]=temp;
           }
       }
   }
    cout<<a[k];
}
