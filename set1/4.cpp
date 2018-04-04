#include<iostream>
#include<string.h>
using namespace std;

int main()
{
char s[10];
int l;
cout<<"Enter string\n";
gets(s);
l=strlen(s);
s[l]='.';
cout<<s;
}
