#include<iostream>

using namespace std;

int fib(int a, int b, int c)
{
    int d = a + b;
    if(c>1)
    {
        a = b;
        b = d;
        c--;
        fib(a,b,c);
    }
    else
        return d;
}

int main()
{
    int n1 = 0, n2 = 1, n;
    cout << "Enter The Number:  ";
    cin >> n;
    if(n==1)
        cout << n1;
    else if(n==2)
        cout << n2;
    else
        cout << fib(n1,n2,n-2);
    return 0;
}
