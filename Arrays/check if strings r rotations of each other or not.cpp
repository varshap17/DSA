#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

#include<string.h>
class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        if(s1.length()!=s2.length())
        {
            return false;
        }
        int n=s1.length();
        s1+=s1;
        int n2;
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]==s2[n2])
            {
                n2++;
            }
            if(n2==s2.length())
            {
                break;
            }
        }
        return n2==s2.length();
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}
  // } Driver Code Ends
