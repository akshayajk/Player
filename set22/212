#include<iostream>
using namespace std;
int main()
{
int a[5][5],sum=0 ,sum1=0,n,i,j,prod=1;
cin>>n;
cout<<"\nEnter the Matrix row wise:\n";
for(i=0;i<n;i++)
{
        for(j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
}
            
    for(i=0;i<n;++i)
        for(j=0;j<n;++j)
        {
            if(i==j)
                sum+=a[i][j];
            if(i+j==(n-1))
                sum1+=a[i][j];
        }
    
    cout<<"\nSum of 1st diagonal is "<<sum;
    cout<<"\nSum of 2nd diagonal is "<<sum1;
    prod=sum*sum1;
    cout<<"\n the product of the sum of the diagnols is :"<<prod;
 
    return 0;
}
