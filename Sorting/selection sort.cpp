#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
	int c=*a;
	*a=*b;
	*b=c;
}
void selectionsort(int arr[],int n)
{
	int m_index=0;
	for(int i=0;i<n-1;i++)
	{
		m_index=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[m_index])
			{
				m_index=j;
			}
		}
		swap(&arr[i],&arr[m_index]);
	}
	for(int k=0;k<n;k++)
	{
		cout<<arr[k]<<" ";
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	selectionsort(arr,n);
	return 0;
}
