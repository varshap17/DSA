#include<iostream>
using namespace std;

int majority(int a[],int n,int x,int y)
{
	int xc=0,yc=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			xc++;
		}
		if(a[i]==y)
		{
			yc++;
		}
	}
	if(xc>yc)
	{
		return x;
	}
	else if(xc==yc)
     {
         return (x<y)?x:y;
     }
     else
     {
         return y;
     }
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int x,y;
	cin>>x>>y;
	cout<<majority(a,n,x,y);
	return 0;
}
