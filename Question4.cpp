#include<iostream>

using namespace std;

int Number( int A)
{	
	int x;
	if( A==0)
		x = 0;	
	else
		x =  A + Number(A-1);
	return (x);		

}
int main()
{
	int a,b;
	cout << "Enter the number:	";
	cin >> a;
	if( a>0)
		cout << "Sum = " << Number(a);
	else
		cout << "Enter a natural number.";
	return 0;
}
