#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int countOfSubstrings(string S, int K) 
    {
        int i=0;
        int j=0;
        int n=S.length();
        int c=0;
        map<char,int> m;
        while(i<K)
        {
            m[S[i]]++;
            i++;
        }
        if(m.size()==K-1)
        {
            c++;
        }
        while(i<n)
        {
            m[S[j]]--;
            if(m[S[j]]==0)
            {
                m.erase(S[j]);
            }
            m[S[i]]++;
            if(m.size()==K-1)
            {
                c++;
            }
            i++;
            j++;
        }
        return c;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        int K;
        cin>>S;
        cin>>K;

        Solution ob;
        cout << ob.countOfSubstrings(S,K) << endl;
    }
    return 0;
}  // } Driver Code Ends
