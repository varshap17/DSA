#include<iostream>
using namespace std;

void heapify(int arr[],int n,int i)
{
	int largest=i;
	int l=(2*i)+1;
	int r=(2*i)+2;
	if(l<n && arr[l]>arr[largest])
	{
		largest=l;
	}
	if(r<n && arr[r]>arr[largest])
	{
		largest=r;
	}
	if(largest!=i)
	{
		swap(arr[largest],arr[i]);
	    heapify(arr,n,largest);
	}
}

void deleteheap(int arr[],int &n)
{
	int lastelement=arr[n-1];
	arr[0]=lastelement;
	n=n-1;
	heapify(arr,n,0);
}

void printarray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int arr[] = { 10, 5, 3, 2, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    deleteheap(arr, n);
    printarray(arr, n);
    return 0;
}
