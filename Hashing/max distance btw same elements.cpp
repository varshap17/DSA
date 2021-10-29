#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    // your task is to complete this function
    int maxDistance(int arr[], int n)
    {
        map <int, vector<int>> m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]].push_back(i);
        }
        int total=0;
        for(auto x:m)
        {
            int a=x.first;
            vector <int>arr(x.second);
            if(arr.size()>1)
            {
                int diff=arr[arr.size()-1]-arr[0];
                total=max(total,diff);
            }
        }
        return total;
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
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.maxDistance(arr,n)<<endl;
    }
    return 0;
}  // } Driver Code Ends
