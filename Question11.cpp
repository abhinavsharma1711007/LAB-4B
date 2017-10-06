#include<iostream>

using namespace std;

int gcd(int a, int b)
{	
	if(b==0)
		return (a);
	else
		gcd(b,a%b);
}

int main()
{	
	int A,B;
	cout << "Enter two numbers:	";
	cin >> A >> B;
	if(A>B)
		cout << "Result = " << gcd(A,B);
	else
		cout << "Result = " << gcd(B,A);
	return 0;
}
	
	
