#include<iostream>
using namespace std;

int main()
{
	int n=7;
	int arr[n]={2,7,1,6,9,3,0};
	int i,j,flag;
	for(int i=0;i<n;i++)
	{
		flag=0;
		for(int j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
		{
			break;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
