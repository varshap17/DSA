#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
// Function to print the k numbers with most occurrences 

class Solution
{
    public:
    //Function to return the sum of frequencies of k numbers
    //with most occurrences in an array.
    int kMostFrequent(int arr[], int n, int k) 
    { 
    	unordered_map<int,int> m;
    	priority_queue<int> q;
    	for(int i=0;i<n;i++)
    	{
    	    m[arr[i]]++;
    	}
    	for(auto x:m)
    	{
    	    q.push(x.second);
    	}
    	int ans=0;
    	int i=0;
        while(!q.empty() && i<k)
    	{
    	    ans+=q.top();
    	    q.pop();
    	    i++;
    	}
    	return ans;
    } 
};

// { Driver Code Starts.
// Driver program to test above 
int main() 
{
	int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        cin >> k;
        Solution ob;
        cout << ob.kMostFrequent(arr, n, k) << endl; 
    }

	return 0; 
} 
  // } Driver Code Ends
