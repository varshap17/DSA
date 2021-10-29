#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int i=0;
	int j=n-1;
	while(i<j)
	{
		while(arr[i]<0)
		{
			i++;
		}
		while(arr[j]>=0)
		{
			j--;
		}
		if(i<j)
		{
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	for(int i=0;i<n+1;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
