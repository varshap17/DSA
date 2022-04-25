
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    int numOfPairs(int X[], int Y[], int N) 
    {
        int count=0;
        map<int,int> mx,my;
        map<pair<int,int>,bool>  mp;
        for(int i=0;i<N;i++)
        {
            mx[X[i]]++;
            my[Y[i]]++;
            if(mp[{X[i],Y[i]}])
            {
                count++;
            }
            else
            {
                mp[{X[i],Y[i]}]=true;
            }
        }
        int ans=0;
        for(auto x:mx)
        {
            int c=x.second;
            ans+=(c*(c-1))/2;
        }
        for(auto x:my)
        {
            int c=x.second;
            ans+=(c*(c-1))/2;
        }
        return ans-2*count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        int X[N], Y[N];
        
        for(int i=0; i<N; i++)
            cin>>X[i];
        for(int i=0; i<N; i++)
            cin>>Y[i];

        Solution ob;
        cout << ob.numOfPairs(X,Y,N) << endl;
    }
    return 0;
}  // } Driver Code Ends
