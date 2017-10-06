#include<iostream>

using namespace std;

int print( int X[], int S, int end)
{
	static int a = 0;
	if(S<end)
	{
		a = a+ X[S];
		print(X,++S,end);
	}
	else
		return(a);
}
main()
{
	int i;
	cout << "Enter the number of element you want to insert in the array:	";
	cin >> i;
	int x[i];
	cout << "Enter elements	";
	for(int a=0;a<i;a++)
		cin >> x[a];
	cout << "Sum = " << print(x,0,i);
}
