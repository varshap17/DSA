#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int makeProductOne(int arr[], int n) 
    {
        int neg=0;
        int z=0;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=-1)
            {
                count+=(-1-arr[i]);
                neg++;
            }
            else if(arr[i]>=1)
            {
                count+=(arr[i]-1);
            }
            else if(arr[i]==0)
            {
                z++;
            }
        }
        if(neg%2!=0 && z==0)
        {
            return count+2;
        }
        return count+z;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.makeProductOne(arr,N) << endl;
    }
    return 0;
}  // } Driver Code Ends
