//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{
    
    public:
    int maxCandy(int height[], int n) 
    { 
        int l=0;
        int r=n-1;
        int lmax=0;
        int rmax=0;
        int ans=0;
        while(l<r-1)
        {
            lmax=max(lmax,height[l]);
            rmax=max(rmax,height[r]);
            ans=max(ans,(min(lmax,rmax)*(r-l-1)));
            if(height[l]<height[r])
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return ans;
    }   
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int height[n];
    	for (int i = 0; i < n; ++i)
    	{
    		cin>>height[i];
    	}
    	
    	Solution obj;
    	
    	cout << obj.maxCandy(height,n)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
