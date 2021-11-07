#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string s)
    {
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            string a="";
            while(s[i]!='.' && i<s.length())
            {
                a+=s[i];
                i++;
            }
            stack<char> st;
            int j=0;
            while(j<a.length())
            {
                st.push(a[j]);
                j++;
            }
            while(!st.empty())
            {
                ans+=st.top();
                st.pop();
            }
            if(i!=(s.length()))
            {
                ans+='.';
            }
        }
        return ans;
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
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends
