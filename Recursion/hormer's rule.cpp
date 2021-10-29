#include<iostream>
using namespace std;

double e(int x,int n)
{
	static int s=1;
	if(n==0)
	{
		return s;
	}
	s=1+x/n*s;
	return e(x,n-1);
}
int main()
{
	int x=2;
	int n=5;
	cout<<e(x,n);
	return 0;
}
