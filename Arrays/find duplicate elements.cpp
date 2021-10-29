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
	int last_duplicate=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==arr[i+1] && last_duplicate!=arr[i])
		{
			cout<<arr[i]<<" ";
			last_duplicate=arr[i];
		}
	}
	return 0;
}
