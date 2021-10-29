#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
	int c=*a;
	*a=*b;
	*b=c;
}
void bubblesort(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
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
	bubblesort(arr,n);
	return 0;
}
