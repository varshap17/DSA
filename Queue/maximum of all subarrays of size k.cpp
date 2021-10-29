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
        vector <int> s;
        deque <int> m(k);
        int i;
        for(i=0;i<k;i++)
        {
            while(!m.empty() && arr[i]>=arr[m.back()])
            {
                m.pop_back();
            }
            m.push_back(i);
        }
        for(;i<n;i++)
        {
            s.push_back(arr[m.front()]);
            while(!m.empty() && m.front()<=i-k)
            {
                m.pop_front();
            }
            while(!m.empty() && arr[i]>=arr[m.back()])
            {
                m.pop_back();
            }
            m.push_back(i);
        }
        s.push_back(arr[m.front()]);
        return s;
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
