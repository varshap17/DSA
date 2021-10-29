//Initial template for C++


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
#include<string.h>
class Solution{
    public:
    string ExcelColumn(int N)
    {
        N=N-1;
        string n="";
        n+=char('A'+N%26);
        N/=26;
        while(N>0)
        {
            n=char('A'+(N-1)%26)+n;
            N=(N-1)/26;
        }
        return n;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.ExcelColumn(n)<<endl;
    }
    return 0;
}
      // } Driver Code Ends
