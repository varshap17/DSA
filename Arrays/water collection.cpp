
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:
    
    int maxWater(int arr[], int n) 
    {
        int tot=0;
        int l=0;
        int r=n-1;
        int lmax=arr[0];
        int rmax=arr[n-1];
        while(l<r)
        {
            lmax=(arr[l]>lmax)?arr[l]:lmax;
            rmax=(arr[r]>rmax)?arr[r]:rmax;
            tot+=(lmax<rmax)?lmax-arr[l++]:rmax-arr[r--];
        }
        return tot;
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
        auto ans = ob.maxWater(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
