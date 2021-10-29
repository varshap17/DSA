#include<iostream>
using namespace std;

int main()
{
	int n;
	int a[n];
	cout<<"Enter the number of elements:"<<endl;
	cin>>n;
	cout<<"Enter the elements:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int total,drops=0;
	for(int j=0;j<n;j++)
	{
		int left,right=0;
		for(int k=0;k<j;k++)
		{
			if(a[k]>left)
			{
				left=a[k];
			}
		}
		for(int l=j+1;l<n;l++)
		{
			if(a[l]>right)
			{
				right=a[l];
			}
		}
		total=min(left,right)-a[j];
		if(total>0)
		{
			drops=drops+total;
		}
	}
	cout<<"Units of rain water trapped is "<<drops;
	return 0;
}

