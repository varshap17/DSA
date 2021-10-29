#include<iostream>
using namespace std;

int main()
{
	int n;
	int arr[n];
	cout<<"Enter the number of elements:"<<endl;
	cin>>n;
	cout<<"Enter the elements:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int total=0,lmax=arr[0],rmax=arr[n-1];
  int l=0,r=n-1;
  while(l<r)
  {
       lmax=(lmax>arr[l])?lmax:arr[l];
       rmax=(rmax>arr[r])?rmax:arr[r];
       total+=(lmax<rmax)?(lmax-arr[l++]):(rmax-arr[r--]);
  }
	cout<<"Units of rain water trapped is "<<total;
	return 0;
}
