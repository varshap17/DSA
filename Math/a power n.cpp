#include<iostream>
using namespace std;

int calc_pow(int a,int n)
{
	if(n==0)
	{
		return 1;
	}
	if(n%2==0)
	{
		int half_ans=calc_pow(a,n/2);
		return half_ans*half_ans;
	}
	else
	{
		int half_ans=calc_pow(a,n/2);
		return half_ans*half_ans*a;
	}
}
int main()
{
	cout<<calc_pow(5,10);
	return 0;
}
