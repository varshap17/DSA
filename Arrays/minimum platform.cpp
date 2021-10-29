#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findPlatform(int arr[], int dep[], int n)
    {
        sort(arr,arr+n);
        sort(dep,dep+n);
        int count=1;
        int j=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]<=dep[j])
            {
                count++;
            }
            else
            {
                j++;
            }
        }
        return count;
    }
    
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int dep[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>dep[i];
	}
	cout<<findPlatform(arr,dep,n);
	return 0;
}
