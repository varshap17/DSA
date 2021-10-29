// C++ implementation to check whether the array
// contains a set of contiguous integers
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    // Function to check whether the array contains
    // a set of contiguous integers
    bool areElementsContiguous(int arr[], int n)
    {
	    map<int,int> mp;
	    for(int i=0;i<n;i++)
	    {
	        mp[arr[i]]++;
	    }
	    vector<int> ans;
	    for(auto x:mp)
	    {
	        if(x.second>=1)
	        {
	            ans.push_back(x.first);
	        }
	    }
	    int s=ans.size();
	    int count=1;
	    for(int i=0;i<s;i++)
	    {
	        if(ans[i+1]-ans[i]==1)
	        {
	            count++;
	        }
	    }
	    if(count==s)
	    {
	        return 1;
	    }
	    else
	    {
	        return 0;
	    }
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n + 1];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        if (ob.areElementsContiguous(arr, n))
            cout << "Yes" <<endl;
        else
            cout << "No" <<endl;
    }
	return 0;
}
  // } Driver Code Ends
