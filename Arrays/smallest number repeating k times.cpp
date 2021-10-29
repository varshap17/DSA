//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++


class Solution{
    public:
    int findDuplicate(int arr[], int N, int K) 
    { 
        map<int,int> mp;
        for(int i=0;i<N;i++)
        {
            mp[arr[i]]++;
        }
        int m=INT_MAX;
        for(auto x:mp)
        {
            if(x.second==K)
            {
                m=min(m,x.first);
            }
        }
        return m;
    }
};

// { Driver Code Starts.

int main() {
	int t;
	
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution ob;
	    cout << ob.findDuplicate(a,n,k) << endl;
	    }
	return 0;
}
  // } Driver Code Ends
