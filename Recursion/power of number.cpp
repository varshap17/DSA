#include<iostream>
using namespace std;

int power(int n,int x)
{
	if(x==0)
	{
		return 1;
	}
	else
	{
		return power(n,x-1)*n;
	}
}
int main()
{
	int n=5;
	int x=4;
	cout<<power(n,x);
	return 0;
}
