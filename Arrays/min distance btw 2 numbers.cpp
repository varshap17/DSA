#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
  public:
    int minDist(int a[], int n, int x, int y) 
    {
        int f=-1;
        int s=-1;
        int dis=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(a[i]==x || a[i]==y)
            {
                if(a[i]==x)
                {
                    f=i;
                }
                if(a[i]==y)
                {
                    s=i;
                }
                if(f!=-1 && s!=-1)
                {
                    dis=min(dis,abs(f-s));
                }
            }
        }
        if(f!=-1 && s!=-1)
        {
            return dis;
        }
        else
        {
            return -1;
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
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}
  // } Driver Code Ends
