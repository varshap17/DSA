#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
	for(int k=0;k<n;k++)
	{
		cout<<arr[k]<<" ";
	}
	return 0;
}
