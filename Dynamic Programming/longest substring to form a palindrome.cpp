#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int longestSubstring(string s) 
    {
        int ans=0;
        int mask=0;
        map<int,int> m;
        m[mask]=-1;
        for(int i=0;i<s.size();i++)
        {
            int t=s[i]-'a';
            mask^=1<<t;
            if(m[mask])
            {
                ans=max(ans,i-m[mask]);
            }
            else
            {
                m[mask]=i;
            }
            for(int j=0;j<26;j++)
            {
                int mask2=mask^(1<<j);
                if(m[mask2])
                {
                    ans=max(ans,i-m[mask2]);
                }
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;

        Solution ob;
        cout << ob.longestSubstring(S) << endl;
    }
    return 0;
}  // } Driver Code Ends
