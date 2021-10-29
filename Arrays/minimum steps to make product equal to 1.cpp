#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int makeProductOne(int arr[], int N) 
    {
        int count=0;
        int neg=0;
        sort(arr,arr+N);
        for(int i=0;i<N;i++)
        {
            if(arr[i]<0)
            {
                count+=(-1-arr[i]);
                neg++;
            }
            if(arr[i]>0)
            {
                count+=(arr[i]-1);
            }
            if(arr[i]==0)
            {
                count+=1;
                if(neg%2!=0)
                {
                    neg++;
                }
            }
        }
        if(neg==0)
        {
            return count;
        }
        else if(neg%2!=0)
        {
            count+=2;
        }
        return count;
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
