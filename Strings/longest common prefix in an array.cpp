
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        sort(arr,arr+N);
        string ans="";
        string a=arr[0];
        string b=arr[N-1];
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==b[i])
            {
                ans+=a[i];
            }
            else
            {
                break;
            }
        }
        if(ans.length()==0)
        {
            return "-1";
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends