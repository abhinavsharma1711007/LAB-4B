#include<iostream>

using namespace std;

void print( int X[], int S, int end)
{
	if(S<end)
	{
		cout << X[S] << endl;
		print(X,++S,end);
	}
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
	print(x,0,i);
}
