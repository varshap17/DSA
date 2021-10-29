#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
     vector<int> findMean(int arr[],int queries[],int n,int q)
    {
        vector<int> ans;
        int presum[n];
        presum[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            presum[i]=presum[i-1]+arr[i];
        }
        for(int i=0;i<q;i+=2)
        { 
            if(queries[i]!=0)
            {
                ans.push_back((presum[queries[i+1]]-presum[queries[i]-1])/(queries[i+1]-queries[i]+1));
            }
            else
            {
                ans.push_back(presum[queries[i+1]]/(queries[i+1]+1));
            }
        }
        
        return ans;
    }

};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int arr[n + 1],queries[2*q + 1];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        for(int i=0;i<2*q;i++){
            cin>>queries[i];
        }

        vector<int> ans;
        Solution ob;
        ans = ob.findMean(arr,queries,n,2*q);

        for(int i:ans)
            cout<<i<<" ";
        cout<<endl;

    }
    return 0;
}
  // } Driver Code Ends
