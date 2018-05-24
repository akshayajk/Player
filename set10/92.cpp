#include<iostream>
using namespace std; 
int main ()
{
    int num, dec=0,b=1,rem;
    cin >> num;
    while (num > 0)
    {
       rem=num%10;
       dec=dec+rem*b;
       b=b*2;
       num=num/10;
       
    }
    cout<<dec;
    return 0;
}
