#include<iostream>
using namespace std;

int fib(int n)
{
	int a=0;
	int b=1;
	int s,i;
	if(n<=1)
	{
		return n;
	}
	for(int i=2;i<=n;i++)
	{
		s=a+b;
		a=b;
		b=s;
	}
	return s;
}
int main()
{
	cout<<fib(10);
	return 0;
}
