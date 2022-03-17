//Initial template for C++
 
#include<bits/stdc++.h>
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    bool crt(char c,char ch)
    {
        if((c=='0' && ch=='9') || (c=='9' && ch=='0')) 
        {
            return true;
        }
        if(ch<c && ((ch-'0')%2)!=0 && (c-ch==1))
        {
            return true;
        }
        if(ch>c && (((ch-'0')%2)==0 && (ch-c==1)))
        {
            return true;
        }
        return false;
    }
    int minLength(string s, int n) 
    {
        stack<char> st;
        for(int i=0;i<n;i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else 
            {
                if(crt(st.top(),s[i])==true)
                {
                    st.pop();
                }
                else
                {
                    st.push(s[i]);
                }
            }
        }
        return st.size();
    } 
};


// { Driver Code Starts.

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        Solution obj;
        cout << obj.minLength(s, n) << "\n";
    }
    return 0;
}  // } Driver Code Ends
