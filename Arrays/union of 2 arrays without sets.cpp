#include<iostream>
using namespace std;

void unionofarrays(int arr1[],int arr2[],int m,int n)
{
	int arr3[m+n];
	int i=0,j=0,k=0;
	while(i<m &&j<n)
	{
		if(arr1[i]<arr2[j])
		{
			arr3[k++]=arr1[i++];
		}
		else if(arr1[i]>arr2[j])
		{
			arr3[k++]=arr2[j++];
		}
		else
		{
			arr3[k++]=arr1[i++];
			j++;
		}
	}
	while(i<m)
	{
		arr3[k++]=arr1[i++];
	}
	while(j<n)
	{
		arr3[k++]=arr2[j++];
	}
	for (int i = 0; i < sizeof(arr3); i++)
    {
        cout<<arr3[i];
    }
}
int main()
{
	int m,n;
	cin>>m>>n;
    int arr1[m];
    int arr2[n];
    cout<<"Enter 1st array:"<<endl;
    for (int i = 0; i < m; i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter 2nd array:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr2[i];
    }
    unionofarrays(arr1,arr2,m,n);
    return 0;
}
