#include<iostream>
using namespace std;

    void swap(int *a,int *b)
    {
        int temp=*a;
        *a=*b;
        *b=temp;
    }
    void sort012(int a[], int n)
    {
        int low=0,mid=0;
        int high=n-1;
        while(mid<=high)
        {
            if(a[mid]==0)
            {
                swap(&a[mid],&a[low]);
                low++;
                mid++;
            }
            else if(a[mid]==2)
            {
                swap(&a[mid],&a[high]);
                high--;
            }
            else 
            {
                mid++;
            }
        }
        for(int i=0;i<n;i++)
        {
        	cout<<a[i]<<" ";
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
	sort012(arr,n);
	return 0;
}
