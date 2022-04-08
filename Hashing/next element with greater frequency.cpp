#include <bits/stdc++.h>
#define N 10000
using namespace std;


 // } Driver Code Ends
class Solution{
public:
    vector<int> print_next_greater_freq(int arr[],int n)
    {
        vector<int> ans(n,-1);
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        stack<int> s;
        for(int i=0;i<n;i++)
        {
            while(!s.empty() && m[arr[s.top()]]<m[arr[i]])
            {
                ans[s.top()]=arr[i];
                s.pop();
            }
            s.push(i);
        }
        return ans;
    }
};


// { Driver Code Starts.

int main()
{
    int arr[N];
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans=ob.print_next_greater_freq(arr,n);
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout << endl;
    }
	return 1;
}
  // } Driver Code Ends
