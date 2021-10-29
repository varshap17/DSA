#include<iostream>
#include<algorithm>
using namespace std;

int items(int arr[],int n,int k)
{
	int ans,i=0;
	if(n==0||k==0)
	{
		return 0;
	}
	sort(arr,arr+n);
	while(i<n && k>=arr[i])
	{
		k=k-arr[i];
		ans++;
		i++;
	}
	return ans;
}
int main()
{
	int n,k;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the amount:"<<endl;
	cin>>k;
	cout<<items(arr,n,k);
	return 0;
}
