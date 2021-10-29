#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	long long sumBitDifferences(int arr[], int n) 
	{
	    long long count1=0;
        long long count0=0;
        long long out=0;
        for(int i=0;i<32;i++)
        {
            for(int j=0;j<n;j++)
            {
                long long x=arr[j]>>i;
                if(x & 1)
                {
                   count1++;
                }
                else
                {
                    count0++;
                }
            }
            out+=count0*count1*2;
            count0=0;
            count1=0;
        }
        return out;
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
        auto ans = ob.sumBitDifferences(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
