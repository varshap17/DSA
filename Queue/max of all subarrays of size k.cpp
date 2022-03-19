//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        vector<int> ans;
        int a=1;
        priority_queue<pair<int,int>>p;
        for(int i=0;i<k-1;i++)
        {
            p.push({arr[i],i});
        }
        int i=0;
        int j=k-1;
        while(j<n)
        {
            p.push({arr[j],j});
            while(!p.empty() && p.top().second<i)
            {
                p.pop();
            }
            ans.push_back(p.top().first);
            i++;
            j++;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
