#include<iostream>
#include<algorithm>
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
	sort(arr,arr+n);
	int repeat=0;
	int miss=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=i+1)
		{
			miss=i+1;
		}
		if(arr[i]==arr[i+1])
		{
			repeat=i+1;
		}
	}
	cout<<"Missing number="<<miss<<endl;
	cout<<"Repeating element="<<repeat<<endl;
	return 0;
}
