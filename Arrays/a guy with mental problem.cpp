#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    long long minTime(long long a[], long long b[], long long n)
    {
        long long ans1=0;
        long long ans2=0;;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                ans1+=a[i];
                ans2+=b[i];
            }
            else
            {
                ans1+=b[i];
                ans2+=a[i];
            }
        }
        return min(ans1,ans2);
    }
};

// { Driver Code Starts.
int main() {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long a[n], b[n];
        for(long long i=0;i<n;i++)
            cin >> a[i];
        for(long long i=0;i<n;i++)
            cin >> b[i];
        Solution ob;
        cout << ob.minTime(a, b, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends
