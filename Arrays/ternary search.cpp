#include<iostream>
using namespace std;

int ternary(int arr[],int n,int k,int l,int r)
{
	while(l<=r)
	{
		int mid1=(l+r)/2;
		int mid2=(r+(r-1))/2;
		if(arr[mid1]==k)
		{
			return mid1;
		}
		if(arr[mid2]==k)
		{
			return mid2;
		}
		if(k<arr[mid1])
		{
			return (ternary(arr,n,k,l,mid1-1)+1);
		}
		else if(arr[mid2]<k)
		{
			return (ternary(arr,n,k,mid2+1,r)+1);
		}
		else
		{
			return (ternary(arr,n,k,mid1+1,mid2-1)+1);
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
	int k;
	cout<<"Enter the element to be searched:\n";
	cin>>k;
	int l=0;
	int r=n-1;
	cout<<ternary(arr,n,k,l,r);
	return 0;
}
	
