#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	// returns required number of subarrays
	int numOfsubarrays(int arr[], int n) 
	{
	    int c=n;
	    for(int i=0;i<n;i++)
	    {
	        int sum=arr[i];
	        int pro=arr[i];
	        for(int j=i+1;j<n;j++)
	        {
	            sum+=arr[j];
	            pro*=arr[j];
	            if(sum==pro)
	            {
	                c++;
	            }
	        }
	    }
	    return c;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.numOfsubarrays(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
