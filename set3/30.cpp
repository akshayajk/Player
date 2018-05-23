#include<iostream>
using namespace std;
int main()
{
    string str,str1;
    int k,count=0;
    cin>>str>>str1;
    cin>>k;
    for(int i=0;i<=str.length();i++)
    {
        if(str[i]!=str1[i])
        {
            count++;
        }
    }
    if(count==k)
    {
        cout<<"yes";
    }
        else{
        cout<<"no";
    }
}
