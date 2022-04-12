#include <bits/stdc++.h>


using namespace std;




 // } Driver Code Ends

class Solution{
  public:
    int Countpair(int arr[], int n, int sum)
    {
        int c=0;
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            if(m.find(sum-arr[i])!=m.end())
            {
                c++;
            }
            m[arr[i]]++;
        }
        if(c)
        {
            return c;
        }
        else
        {
            return -1;
        }
    }
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        int arr[n+1];
        
        for(int i=0;i<n;i++)
        cin>>arr[i];

        int sum;
        cin>>sum;
        Solution obj;
        cout << obj.Countpair(arr, n, sum) << endl;
        
    }
	return 0;
}
  // } Driver Code Ends
