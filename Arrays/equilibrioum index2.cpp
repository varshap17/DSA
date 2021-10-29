#include<iostream>
using namespace std;

int equilibrium(int arr[],int n)
{
	int sum=0;leftsum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	for(int i=0;i<n;i++)
	{
		sum-=arr[i];
		if(sum==leftsum)
		{
			return i;
		}
		leftsum+=arr[i];
	}
	return -1;
}

int main()
{
	int n;
	cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    if(equilibrium(arr,n)==-1)
    {
    	cout<<"No equilibrium index exists"<<endl;
	}
	else
	{
		cout<<"Equilibrium index = "<<equilibrium(arr,n)<<endl;
	}
	return 0;
}
