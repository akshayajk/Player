#include <iostream>
using namespace std;
int main()
{
string str;
cin>>str;
char a;
cin>>a;
for(int i=0;i<str.length();i++)
{
    if(str[i]==a)
    {
        cout<<i+1;
        break;
    }
}
return 0;
}
