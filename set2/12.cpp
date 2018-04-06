#include <iostream>

using namespace std;

int main()
{
    int a[50],n,k,i,j,temp;;
    cout<<"enter the values";
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(j=0;j<k;j++)
	{
		temp=a[n-1];
	for(i=n-2 ;i>=0;i--)
	{
		a[i+1]=a[i];	
	}
	a[0]=temp;
}
	for(i=0;i<n;i++)
	{
	cout<<a[i];
}
}
