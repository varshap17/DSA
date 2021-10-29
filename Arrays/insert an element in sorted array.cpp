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
	int x;
	cout<<"Enter the element to be inserted:\n";
	cin>>x;
	int i=n-1;
	while(arr[i]>x)
	{
		arr[i+1]=arr[i];
		i--;
	}
	arr[i+1]=x;
	for(int i=0;i<n+1;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
