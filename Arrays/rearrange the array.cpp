#include <bits/stdc++.h>

using namespace std;



 // } Driver Code Ends

class Solution{
  public:
    void rearrangeArray(int arr[], int n) 
    {
        sort(arr,arr+n);
        int h=0;
        int i=0;
        int j=n-1;
        int a[n];
        for(int i=0;i<n;i++)
        {
            a[i]=arr[i];
        }
        while(i<=j)
        {
            arr[h++]=a[i++];
            arr[h++]=a[j--];
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
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        obj.rearrangeArray(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
