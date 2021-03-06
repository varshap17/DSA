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

void buildheap(int arr[],int &n)
{
	int startindex=(n-2)/2;
	for(int i=startindex;i>=0;i--)
	{
		heapify(arr,n,i);
	}
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
	int arr[] = {1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17};
    int n = sizeof(arr) / sizeof(arr[0]);
    buildheap(arr, n);
    printarray(arr, n);
    return 0;
}
