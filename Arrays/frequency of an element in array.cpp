#include<iostream>
using namespace std;

int first(int arr[],int n,int a)
{
	int l=0,r=n-1;
	while(l<=r)
	{
		int mid=(l+r)/2;
		if((arr[mid]==a)&&((mid==0)||(arr[mid-1]!=a)))
		{
			return mid;
		}
		if(arr[mid]<a)
		{
			l=mid+1;
		}
		else
		{
			r=mid-1;
		}
	}
	return -1;
}

int last(int arr[],int n,int a)
{
	int l=0,r=n-1;
	while(l<=r)
	{
		int mid=(l+r)/2;
		if((arr[mid]==a)&&((mid==n-1)||(arr[mid+1]!=a)))
		{
			return mid;
		}
		if(a<arr[mid])
		{
			r=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	return -1;
}

int main()
{
	int n,a,i;
	cin>>n;
    int arr[n];
    for (i = 0; i < n; i++)
        cin>>arr[i];
    cout<<"Enter the element whose occurence is to be found out\n";
    cin>>a;
    cout<<"Frequency of "<<a<<" is "<<(last(arr,n,a)-first(arr,n,a)+1)<<endl;
    return 0;
}
