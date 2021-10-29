#include<iostream>
using namespace std;

int power(int n,int x)
{
	if(x==0)
	{
		return 1;
	}
	if(x%2==0)
	{
		return power(n*n,(x/2));
	}
	else
	{
		return n*power(n*n,(x-1)/2);
	}
}
int main()
{
	int n=5;
	int x=4;
	cout<<power(n,x);
	return 0;
}
