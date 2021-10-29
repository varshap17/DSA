#include<iostream>
using namespace std;

void sorting(int arr[],int n)
{
	for(int i=1;i<n;i++)
	{
		int j=i-1;
		int key=arr[i];
		while(j>=0 &&arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
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
	sorting(arr,n);
	return 0;
}
