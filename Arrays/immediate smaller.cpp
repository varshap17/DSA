#include<iostream>
using namespace std;
 
int immediateSmaller(int arr[], int n, int x)
{
    int s=-1;
    for(int i=0;i<n;i++)
    {
	    if(arr[i]<x && arr[i]>s)
        {
            s=arr[i];
        }
    }
    return s;
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
	int x;
	cin>>x;
	cout<<immediateSmaller(arr,n,x);
}
