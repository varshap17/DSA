#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int k)
    {
        int sum=0;
        int c=0;
        map<int,int> m;
        for(int i=0;i<N;i++)
        {
            sum+=Arr[i];
            if(sum==k)
            {
                c++;
            }
            if(m.find(sum-k)!=m.end())
            {
                c+=m[sum-k];
            }
            m[sum]++;
        }
        return c;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.findSubArraySum(Arr, N, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends
