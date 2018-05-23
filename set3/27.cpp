#include<iostream>
using namespace std;
int main()
{
    string str,str1;
    int i;
    cin>>str;
    for(i=0;i<=str.length();i++)
    {
        if((str[i]>=97)&&(str[i]<=122))
        {
            str[i]=str[i]-32;
            str1[i]=str[i];
            
        }
        else if((str[i]>=65)&&(str[i]<=90))
        {
            str[i]=str[i]+32;
            str1[i]=str[i];
            
        }
    }
    cout<<str;
    
}
