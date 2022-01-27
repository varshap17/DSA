#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    char firstRep (string s)
    {
        map<char,int> m;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(m[s[i]]>1)
            {
                return s[i];
            }
        }
        return '#';
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        char res = ob.firstRep (s);
        if (res == '#') cout << -1 << endl;
        else cout << res << endl;
    }
    return 0;
}


  // } Driver Code Ends
