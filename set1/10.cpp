#include <iostream>

using namespace std;

int main()
{
    string str1,str2;
    int count=0;
    cin>>str1>>str2;
    for(int i=1;i<=str1.length();i++)
    {
        if(str1[i]==str2[i])
            {
              count=count+0;
            }
            else
            {
             count=count+1;
            }
    }
    if(count==1)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }

    return 0;
}
