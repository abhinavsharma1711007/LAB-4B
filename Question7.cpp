#include<iostream>
using namespace std;
void nat(int a, int b , int c)
{
    if(a>0)
    {
        b = b*10 + a%10;
        a = a/10;
        nat(a,b,c);
    }
    else
    {
        if(b==c)
            cout << "The number is a palindrome";
        else
            cout << "The number is not a palindrome";
    }
}
int main()
{
    int a1,b1=0;
    cout << "Enter the number:  ";
    cin >> a1;
    nat(a1,b1,a1);
    return 0;
}
