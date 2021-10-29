#include<iostream>
using namespace std;

void heapify(int arr[],int n,int i)
{
	int parent=(i-1)/2;
	if(parent>=0)
	{
		if(arr[i]>arr[parent])
		{
			swap(arr[i],arr[parent]);
			heapify(arr,n,parent);
		}
	}
}

void createheap(int arr[],int &n,int key)
{
	n=n+1;
	arr[n-1]=key;
	heapify(arr,n,n-1);
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
	int arr[] = { 10, 5, 3, 2, 4 };
    int n = 5;
    int key = 15;
	createheap(arr, n, key);
    printheap(arr, n);
    return 0;
}
