#include<iostream>

using namespace std;

int lcm( int a, int b)
{	
	static int x = a;
	if(a%b==0)
		return (a);
	else
	{
		lcm(a+x,b);
	}
}
int main()
{
	int A,B;
	cout << "Enter two numbers:	";
	cin >> A >> B;
	if(A>B)
		cout << lcm(A,B);
	else
		cout << lcm(B,A);
	return 0;
}
