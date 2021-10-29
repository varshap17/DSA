//We are given an array of distinct integers. We have to find the peak element ( The element which is greater than both the neighbours ). There can be many such elements we need to return any of them.
//Input : [10, 20, 15, 2, 23, 90, 67]
//Output : 20 or 90
#include<iostream>
using namespace std;

int peak(int arr[],int n,int low,int high)
{
	while(low<=high)
	{
		int mid=(low+(high-low))/2;
		if((mid==0 || arr[mid-1]<arr[mid])&&(mid==n-1 || arr[mid+1]<arr[mid]))
		{
			return arr[mid];
		}
		else if(mid>0 && arr[mid+1]>arr[mid])
		{
			return peak(arr,n,low,mid-1);
		}
		else
		{
			return peak(arr,n,mid+1,high);
		}
	}
	return -1;
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
	cout<<peak(arr,n,0,n-1);
	return 0;
}
