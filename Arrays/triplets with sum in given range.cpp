#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int range(int Arr[],int N,int t)
    {
        int count=0;
        for(int i=0;i<N;i++)
        {
            int l=i+1;
            int r=N-1;
            while(l<r)
            {
                int sum=Arr[i]+Arr[l]+Arr[r];
                if(sum<=t)
                {
                    count+=r-l;
                    l++;
                }
                else
                {
                    r--;
                }
            }
        }
        return count;
    }
    int countTriplets(int Arr[], int N, int L, int R) 
    {
        sort(Arr,Arr+N);
        return range(Arr,N,R)-range(Arr,N,L-1);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int Arr[N];
        for (int i = 0; i < N; i++) cin >> Arr[i];
        int L, R;
        cin >> L >> R;
        Solution obj;
        cout << obj.countTriplets(Arr, N, L, R) << endl;
    }
    return 0;
}  // } Driver Code Ends
