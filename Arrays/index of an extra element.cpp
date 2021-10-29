#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
  public:
    int findExtra(int a[], int b[], int n) {
        int start=0;
        int end=n-1;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(a[mid]<b[mid] && a[mid-1]==b[mid-1])
            {
                return mid;
            }
            else if(a[mid]==b[mid])
            {
                start=mid+1;
            }
            else 
            {
                end=mid-1;
            }
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n - 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }
        Solution obj;
        cout << obj.findExtra(a, b, n) << endl;
    }
}  // } Driver Code Ends
