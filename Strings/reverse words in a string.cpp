#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

#include<string.h>
class Solution
{
    public:
    //Function to reverse words in a given string.
    void reversestr(string &r,int i,int j)
    {
        for(int a=i,b=j-1;a<=b;a++,b--)
        {
            char c=r[a];
            r[a]=r[b];
            r[b]=c;
        }
    }
    string reverseWords(string S) 
    { 
        string r;
        int a=0;
        int b=S.length();
        for(int i=0;i<b;i++)
        {
            if(S[i]=='.')
            {
                reversestr(S,a,i);
                a=i+1;
            }
            if(i==(b-1))
            {
                reversestr(S,a,b);
            }
        }
        reverse(S.begin(),S.end());
        return S;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends
