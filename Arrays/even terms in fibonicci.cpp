#include<iostream>
using namespace std;

int main()
{
	int x;
	cin>>x;
	int a=0,b=2,c;
	cout<<a<<" "<<b<<" ";
	while(c<=x)
	{
		c=4*b+a;
		a=b;
		b=c;
		if(c>=x)
		{
			break;
		}
		cout<<c<<" ";
	}
	return 0;
}
