#include<iostream>
using namespace std;

void merge(int a[],int l, int mid, int h)
{
	int i=l;
	int j=mid+1;
	int k=l;
	int b[100];
	while(i<=mid && j<=h)
	{
		if(a[i]<a[j])
		{
			b[k++]=a[i++];
		}
		else
		{
			b[k++]=a[j++];
		}
	}
	for(;i<=mid;i++)
	{
		b[k++]=a[i];
	}
	for(;j<=h;j++)
	{
		b[k++]=a[j];
	}
	for(int i=l;i<=h;i++)
	{
		a[i]=b[i];
	}
}

void mergesort(int a[],int n)
{
	int l,h,mid,p,i;
	for(p=2;p<=n;p*=2)
	{
		for(i=0;i+p-1<=n;i+=p)
		{
			l=i;
			h=i+p-1;
			mid=(l+h)/2;
			merge(a,l,mid,h);
		}
	}
	if(p/2<n)
	{
		merge(a,0,p/2-1,n);
	}
}


int main()
{
	int a[10]={11,13,7,12,16,9,24,5,10,3};
	mergesort(a,10);
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
