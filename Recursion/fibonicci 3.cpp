#include<iostream>
using namespace std;
int f[10]={-1};
int fib(int n)
{
	if(n<=1)
	{
		return n;
	}
	else
	{
		if(f[n-2]==-1)
		{
			f[n-2]=fib(n-2);
		}
		if(f[n-1]==-1)
		{
			f[n-1]=fib(n-1);
		}
		f[n]=f[n-1]+f[n-2];
	}
	return f[n-2]+f[n-1];
}
int main()
{
	cout<<fib(5);
	return 0;
}
