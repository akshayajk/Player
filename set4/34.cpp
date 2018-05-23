#include<iostream>
using namespace std;
int main()
{
    string str;
    int i=0;
    cin>>str;
    while(i<str.length())
    {
        cout<<str[i];
        i += 3;
    }
   
}
