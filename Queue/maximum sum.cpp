//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

//Back-end complete function Template for C++

class Solution{
  public:
    long maximum_sum(int N,vector<int> A,int K)
    {
        unordered_map<int,int> m;
        for(int i=0;i<N;i++)
        {
            if(m.find(A[i])==m.end())
            {
                m[A[i]]=1;
            }
            else
            {
                m[A[i]]++;
            }
        }
        priority_queue<pair<int,int>>pq;
        for(auto j:m)
        {
            pq.push({j.second,j.first});
        }
        long total=0;
        for(int i=0;i<K;i++)
        {
            pair<int,int> pr=pq.top();
            total+=pr.second;
            pq.pop();
            pq.push({pr.first-1,pr.second});
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
        int n,k;
        cin>>n>>k;
        vector<int>v(n,0);
        
        for(int i=0;i<n;i++)
        cin>>v[i];
        Solution obj;
        cout<< obj.maximum_sum(n,v,k)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
