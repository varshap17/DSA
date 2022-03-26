//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMaxAverage(int arr[], int n, int k) 
    {
        int m=0;
        int msum=0;
        int j=0;
        for(int i=0;i<k;i++)
        {
            m+=arr[i];
        }
        msum=m;
        int c=0;
        for(int i=k;i<n;i++)
        {
            m+=arr[i];
            m-=arr[j];
            if(m>msum)
            {
                c=j+1;
                msum=m;
            }
            j++;
        }
        return c;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxAverage(arr, n, k);
        for (int i = ans; i < ans + k; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
