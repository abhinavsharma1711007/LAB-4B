#include<iostream>

using namespace std;

void print( int X[], int S, int end)
{
	static int max = X[0];
	static int min = X[0];
	if(S<end)
	{
		if( X[S]>max)
			max = X[S];
		if( X[S]<min)
			min = X[S];
		print(X,++S,end);
	}
	else
		cout << "Max = " << max << endl << "Min = " << min;
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
