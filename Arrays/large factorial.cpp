#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++


class Solution{
public:
    vector<long long> factorial(vector<long long> a, int n) 
    {
        long long m=-1;
        for(int i=0;i<n;i++)
        {
            if(a[i]>m)
            {
                m=a[i];
            }
        }
        vector<long long>fac(m+1);
        long long pro=1;
        fac[0]=1;
        fac[1]=1;
        for(int i=2;i<fac.size();i++)
        {
            pro=(pro*i)%1000000007;
            fac[i]=pro;
        }
        for(int i=0;i<n;i++)
        {
            a[i]=fac[a[i]];
        }
        return a;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<long long> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<long long> res = ob.factorial(a, n);
        for (i = 0; i < n; i++) {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
