// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    
    long long int nthFibonacci(long long int n)
    {
        long long int d[n+1]={0};
        d[0]=0;
        d[1]=1;
        for(int i=2;i<=n;i++)
        {
            d[i]=(d[i-1]+d[i-2])%1000000007;
        }
        return d[n];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends
