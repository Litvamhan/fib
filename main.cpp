 
#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
	int x = 0, y = 1, z, i;
	if( n == 0)
		return x;
	for(i = 2; i <= n; i++)
	{
	z = x + y;
	x = y;
	y = z;
	}
	return y;
}


int main()
{
	int n;
	cout<<"Enter a value";
	cin>>n;
	cout << fib(n);
	return 0;
}


