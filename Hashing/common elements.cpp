//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
    public:
    vector<int> common_element(vector<int>v1,vector<int>v2)
    {
        vector<int> ans;
        map<int,int> m1;
        map<int,int> m2;
        for(int i=0;i<v1.size();i++)
        {
            m1[v1[i]]++;
        }
        for(int i=0;i<v2.size();i++)
        {
            m2[v2[i]]++;
        }
        for(auto x:m1)
        {
            if(m2.find(x.first)!=m2.end())
            {
                int m=min(m1[x.first],m2[x.first]);
                for(int i=0;i<m;i++)
                {
                    ans.push_back(x.first);
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};

// { Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int>v1(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        int m;
        cin>>m;
        vector<int>v2(m,0);
        for(int i=0;i<m;i++)
        {
            cin>>v2[i];
        }
        Solution ob;
        vector<int>result;
        result=ob.common_element(v1,v2);
        for(auto i:result)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
    }
}  // } Driver Code Ends
