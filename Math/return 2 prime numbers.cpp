// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> primeDivision(int N)
    {
        vector<int> ans;
        vector<bool> prime(N+1,false);
        for(int i=2;i<=N;i++)
        {
            if(prime[i]==false)
            {
                for(int j=i*i;j<=N;j+=i)
                {
                    prime[j]=true;
                }
            }
        }
        int i=2;
        while(i<=N/2)
        {
            if(prime[i]==false && prime[N-i]==false)
            {
                return {i,N-i};
            }
            i++;
        }
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.primeDivision(N);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}  // } Driver Code Ends
