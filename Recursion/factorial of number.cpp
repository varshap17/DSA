#include<iostream>
using namespace std;

int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return factorial(n-1)*n;
	}
}
int main()
{
	int n=5;
	cout<<factorial(n);
	return 0;
}
