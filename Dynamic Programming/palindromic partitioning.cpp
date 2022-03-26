// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
int static t[1001][1001];
class Solution{
public:
    bool ispalindrome(string s,int i,int j)
    {
        if(i==j)
        {
            return true;
        }
        if(i>j)
        {
            return true;
        }
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    int solve(string s,int i,int j)
    {
        if(i>=j)
        {
            return 0;
        }
        int ans=INT_MAX;
        int left,right;
        if(ispalindrome(s,i,j))
        {
            return 0;
        }
        if(t[i][j]!=-1)
        {
            return t[i][j];
        }
        else
        {
            for(int k=i;k<j;k++)
            {
                if(t[i][k]!=-1)
                {
                    left=t[i][k];
                }
                else
                {
                    left=solve(s,i,k);
                    t[i][k]=left;
                }
                if(t[k+1][j]!=-1)
                {
                    right=t[k+1][j];
                }
                else
                {
                    right=solve(s,k+1,j);
                    t[k+1][j]=right;
                }
                int temp=1+left+right;
                ans=min(ans,temp);
            }
        }
        return t[i][j]=ans;
    }
    int palindromicPartition(string str)
    {
        memset(t,-1,sizeof(t));
        int c=solve(str,0,str.length()-1);
        return c;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
