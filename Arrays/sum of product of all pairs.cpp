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
	int sum=0,sqsum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
		sqsum=sqsum+(arr[i]*arr[i]);
	}
	int ans=((sum*sum)-sqsum)/2;
	cout<<ans;
	return 0;
}
