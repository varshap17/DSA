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
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==arr[i+1])
		{
			j=i+1;
			while(arr[j]==arr[i])
			{
				j++;
			}
			cout<<arr[i]<<" repeating "<<j-i<<" times\n";
			i=j-1;
		}
	}
	return 0;
}
	
