// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool isprime(long long int n)
    {
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
    long long primeProduct(long long L, long long R)
    {
        if(L<=1 && R<=1)
        {
            return 1;
        }
        long long mul=1;
        long long mod=1000000007;
        for(int i=L;i<=R;i++)
        {
            if(isprime(i))
            {
                mul = ((mul%mod)*(i%mod))%mod;
            }
        }
        
        return mul%mod;
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long L, R;
        cin>>L>>R;
        
        Solution ob;
        cout<<ob.primeProduct(L, R)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
