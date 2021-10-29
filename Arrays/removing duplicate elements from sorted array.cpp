#include<iostream>
using namespace std;

int remove_duplicate(int a[],int n)
{
    int c=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]!=a[c])
        {
            c+=1;
            a[c]=a[i];
        }
    }
    return c+1;
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
	int m=remove_duplicate(a,n);
	for(int j=0;j<m;j++)
	{
		cout<<a[j]<<" ";
	}
	return 0;
}
