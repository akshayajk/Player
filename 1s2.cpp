#include<iostream>

int main()
{
int i, no, fact=1;
cout<<"Enter the any no. : ";
cin>>no;
for(i=1;i<=no;i++)
{
fact=fact*i;
}
cout<<"Factorial: "<<fact;
return 0;
}
