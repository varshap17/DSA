#include<iostream>
using namespace std;

void merge(int a[],int l,int mid,int h)
{
	int i=l;
	int k=l;
	int j=mid+1;
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

void mergesort(int a[],int l,int h)
{
	if(l<h)
	{
		int mid=(l+h)/2;
		mergesort(a,l,mid);
		mergesort(a,mid+1,h);
		merge(a,l,mid,h);
	}
}

int main()
{
	int a[10]={43,83,65,12,45,89,34,12,82,50};
	mergesort(a,0,10);
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
	
}
