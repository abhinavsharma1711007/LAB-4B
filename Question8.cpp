#include<iostream>
using namespace std;
int nat(int a, int b )
{
    if(a>0)
    {
        b = b + a%10;
        a = a/10;
        nat(a,b);
    }
    else
    {
        return (b);
    }
}
int main()
{
    int a1,b1=0;
    cout << "Enter the number:  ";
    cin >> a1;
    cout << "Sum of Digits = " << nat(a1,b1);
    return 0;
}
