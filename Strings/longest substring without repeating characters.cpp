//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;




 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    // s is the given string
    int SubsequenceLength (string s) 
    {
        int total=0;
        int count=0;
        int array[26]={0};
        for(int i=0;i<s.length();i++)
        {
            if(array[s[i]-'a']==0)
            {
                array[s[i]-'a']++;
            }
            else
            {
                array[s[i]-'a']++;
                while(array[s[i]-'a']>1)
                {
                    array[s[count]-'a']--;
                    count++;
                }
            }
            total=max(total,i-count+1);
        }
        return total;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    cin>>ws;
    while(t--)
    {
        string str;
        getline(cin,str);
        Solution obj;
        cout<<obj.SubsequenceLength(str)<<"\n";
    }
    return 0;
}
  // } Driver Code Ends
