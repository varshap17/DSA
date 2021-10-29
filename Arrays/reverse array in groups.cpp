#include<iostream>
using namespace std;

class Solution{
public:
void reverse(vector<long long>& arr,int start,int end)
{
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void reverseInGroups(vector<long long>& arr, int n, int k)
{
    for(int i=0;i<n;i+=k)
    {
        if(i+k<n)
        {
            reverse(arr,i,i+k-1);
        }
        else
        {
            reverse(arr,i,n-1);
        }
    }
}
}
int main()
{
	int n,k;
	cin>>n>>k;
	vector<long long> arr;
	for(long long i=0;i<n;i++)
	{
		long long x;
		cin>>x;
		arr.push_back(x);
	}
	Solution ob;
	ob.reverseInGroups(arr,n,k);
	for(long long i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
