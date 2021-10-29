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
    	for(int i=0;i<n;i++)
    	{
    	    m[arr[i]]++;
    	}
    	vector <int> count;
    	for(auto x:m)
    	{
    	    count.push_back(x.second);
    	}
    	sort(count.begin(),count.end(),greater<int>());
    	int ans=0;
    	for(int i=0;i<k;i++)
    	{
    	    ans+=count[i];
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
