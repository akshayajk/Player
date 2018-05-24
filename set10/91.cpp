#include<iostream>
using namespace std; 
int main ()
{
    int num, bin;
    cin >> num;
    while (num > 0)
    {
        bin = num % 2;
        cout << bin;
        num /= 2;
    }
    return 0;
}
