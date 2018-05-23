#include<iostream>
using namespace std;
int main()
{
    int n,k,i,count=0;
    cin>>n>>k;
    while(n>0)
    {
        i=n%10;
        n=n/10;
        
    if(i==k)
    {
        count++;
    }
    }
    cout<<count;
}
