#include<iostream>
using namespace std;

int maxsum(int arr[],int n)
{
	int max_sofar,max_now;
	max_sofar=INT_MIN;
	max_now=0;
	for(int i=0;i<n;i++)
	{
		max_now+=arr[i];
		if(max_sofar<max_now)
		{
			max_sofar=max_now;
		}
		if(max_now<0)
		{
			max_now=0;
		}
	}
	return max_sofar;
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
    cout<<"Max Sum = "<<maxsum(arr,n)<<endl;
    return 0;
}
