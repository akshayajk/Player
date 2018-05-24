#include<iostream>
using namespace std; 
int main ()
{
    int num, dec=0,b=1,rem,oct;
    cin >> num;
    while (num > 0)
    {
       rem=num%10;
       dec=dec+rem*b;
       b=b*2;
       num=num/10;
       
    }
    while(dec>0)
    {
        oct=dec%8;
        dec=dec/8;
        cout<<oct;
        
    }
    return 0;
}
