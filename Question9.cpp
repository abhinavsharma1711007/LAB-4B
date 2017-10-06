#include<iostream>
using namespace std;
int nat(int a, int b )
{
    if(a>0)
    {
        b = b * a;
        a--;
        nat(a,b);
    }
    else
    {
        return (b);
    }
}
int main()
{
    int a1,b1=1;
    cout << "Enter the number:  ";
    cin >> a1;
    cout << "Factorial = " << nat(a1,b1);
    return 0;
}
