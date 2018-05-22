
#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,j,n,temp,rem=0,rev=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        }
        for(i=0;i<n;i++)
	{		
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp  =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
    for(i=0;i<n;i++)
    {
		cout<<arr[i]<<"\t"<<"\n";
}
j=i-1;  
	i=0;  
	while(i<j)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
	for(i=0; i<n; i++)
	{
		cout<<arr[i];
	}
}
