#include<iostream>
using namespace std;

int median(int arr[], int n, int brr[], int m)
    {
        int a=0,b=0;
        int ma=0;
        for(int i=0;i<(n+m+1)/2;i++)
        {
            if(arr[a]<=brr[b])
            {
                ma=arr[a++];
            }
            else
            {
                ma=brr[b++];
            }
        }
        if((n+m)%2==0)
        {
            ma+=min(arr[a],brr[b]);
            return ma/2;
        }
        else
        {
            return ma;
        }
    }
    
int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n];
	int brr[m];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int j=0;j<n;j++)
	{
		cin>>brr[j];
	}
	cout<<median(arr,n,brr,m);
	return 0;
}
