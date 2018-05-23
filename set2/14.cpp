#include <iostream>
using namespace std;
int main()
{
string str;
cin>>str;
int l=str.length();
for(int i=l-1;i>=0;i--)
{
if(str[i]!='a' && str[i]!='e' 
&& str[i]!='i' && str[i]!='o' 
&& str[i]!='u' && str[i]!='A' 
&& str[i]!='E' && str[i]!='I' 
&& str[i]!='O' && str[i]!='U')
{
cout<<str[i];
}
}
return 0;
}
