#include<iostream>

using namespace std;

void Number( int A)
{	
	static int x = 1;
	if(A>0)
	{	
		cout << x << endl;
		x++;
		Number(A-1);
	}		
}
int main()
{
	int a;
	cout << "Enter the number:	";
	cin >> a;
	if( a>0)
		Number(a);
	else
		cout << "Enter a natural number.";
	return 0;
}
