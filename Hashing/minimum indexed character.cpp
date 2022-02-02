//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        map<char,int> m;
        int n=str.length();
        int ma=patt.length();
        for(int i=0;i<n;i++)
        {
            if(m.find(str[i])==m.end())
            {
                m[str[i]]=i;
            }
        }
        int mini=INT_MAX;
        for(int i=0;i<ma;i++)
        {
            if(m.find(patt[i])!=m.end())
            {
                mini=min(mini,m[patt[i]]);
            }
        }
        if(mini==INT_MAX)
        {
            return -1;
        }
        return mini;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}
  // } Driver Code Ends
