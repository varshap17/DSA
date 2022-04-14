#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        map<int,int> m;
        int presum=0;
        int res=0;
        for(int i=0;i<N;i++)
        {
            presum+=A[i];
            if(presum==K)
            {
                res=i+1;
            }
            if(m.find(presum)==m.end())
            {
                m.insert({presum,i});
            }
            if(m.find(presum-K)!=m.end())
            {
                res=max(res,i-m[presum-K]);
            }
        }
        return res;
    } 

};

// { Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
