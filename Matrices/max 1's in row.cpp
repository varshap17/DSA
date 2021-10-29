#include<iostream>
using namespace std;
int first(int arr[],int n,int a)
{
	int l=0,r=n-1;
	while(l<=r)
	{
	    int mid=(l+r)/2;
	    if(arr[mid]==a && ((mid==0)||arr[mid-1]!=a))
	    {
	        return mid;
	    }
	    if(arr[mid]<a)
	    {
	        l=mid+1;
	    }
	    else
	    {
	        r=mid-1;
	    }
    }
	return -1;
}
int index(vector<vector<int>>arr,int m,int n)
{
	int m=0;
	int i;
	int j=first(arr[0],n,1);
	if(j==-1)
	{
		j=n-1
	}
	for(int i=1;i<m;i++)
	{
		while(j>=0 && arr[i][j]==1)
		{
			j=j-1;
			m=i;
		}
	}
	return m;
}
int main()
{
	int m,n;
	cin>>m>>n;
	int arr[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
				cin>>arr[m][n];
		}
	}
    cout<<index(arr,m,n);
}
