#include<iostream>
using namespace std;
 
int main()
{
    int num1, num2, i, j, flag,count = 0;
 cout<<"Enter the value of num1 and num2 \n";
    cin>>num1>>num2;                                               
    for (i = num1; i <= num2;i++)
    {
        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if ((i % j) == 0)
            {
                flag = 1;
               
            }
        }
        if (flag == 0)
        {
            cout<<i;;
            count++;
        }
    }
    cout<<"Number of primes between"<<num1<<" and "<<num2<<" = "<<count;
}
