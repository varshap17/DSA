#include<iostream>
using namespace std;

void insert(int arr[],int n)
{
	int temp;
	int i=n-1;
	temp=arr[n-1];
	while(i>0 && temp>arr[(i-1)/2])
	{
		arr[i]=arr[i/2];
		i=i/2;
	}
	arr[i]=temp;
}

void printheap(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}

int main()
{
	int arr[]={10,5,3,2,4,15};
	int i;
	for(i=1;i<=6;i++)
	{
		insert(arr,i);
	}
	printheap(arr, 6);
	return 0;
}
