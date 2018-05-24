#include<iostream>
using namespace std;
int main()
{
int a[5][5],prod=1 ,prod1=1,n,i,j,sum=0;
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
                prod*=a[i][j];
            if(i+j==(n-1))
                prod1*=a[i][j];
        }
    
    cout<<"\nprod of 1st diagonal is "<<prod;
    cout<<"\nprod of 2nd diagonal is "<<prod1;
    sum=prod+prod1;
    cout<<"\n the sum of the product of the diagnols is :"<<sum;
 
    return 0;
}
