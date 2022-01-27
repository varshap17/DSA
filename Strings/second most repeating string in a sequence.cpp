#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        map<string,int> m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        int m1=0;
        int m2=0;
        priority_queue<pair<int,string>> pq;
        for(auto x:m)
        {
            pq.push({x.second,x.first});
        }
        pq.pop();
        return pq.top().second;
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
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends
