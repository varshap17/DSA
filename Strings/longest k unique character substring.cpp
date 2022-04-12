//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) 
    {
        map<char,int> m;
        int n=s.length();
        int i=0;
        int j=0;
        int ans=-1;
        while(i<n)
        {
            m[s[i]]++;
            if(m.size()<k)
            {
                i++;
            }
            else if(m.size()>k)
            {
                while(m.size()>k)
                {
                    m[s[j]]--;
                    if(m[s[j]]==0)
                    {
                        m.erase(s[j]);
                    }
                    j++;
                }
            }
            if(m.size()==k)
            {
                ans=max(ans,i-j+1);
                i++;
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
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}
  // } Driver Code Ends
