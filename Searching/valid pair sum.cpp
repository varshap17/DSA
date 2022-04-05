//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++


class Solution{
    
    public:
    long long ValidPair(int a[], int n) 
    { 
    	long long c=0;
    	long long i=0;
    	long long j=n-1;
    	sort(a,a+n);
    	reverse(a,a+n);
    	while(j>i)
    	{
    	    int sum=a[i]+a[j];
    	    if(sum<=0)
    	    {
    	        j--;
    	    }
    	    if(sum>0)
    	    {
    	        c+=(j-i);
    	        i++;
    	    }
    	}
    	return c;
    }   
};

// { Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int array[n];
		for (int i = 0; i < n; ++i)
			cin>>array[i];
	    Solution obj;
		cout << obj.ValidPair(array, n) <<"\n";
	}
	return 0; 
} 

  // } Driver Code Ends
