#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        stack <int> s;
        long long area=0;
        long long marea=0;
        long long topv=0;
        int i=0;
        while(i<n)
        {
            if(s.empty() || arr[s.top()]<=arr[i])
            {
                s.push(i++);
            }
            else
            {
                topv=s.top();
                s.pop();
                area = arr[topv] * (s.empty() ? i : i - s.top() - 1);
            }
            if (marea < area)
                marea = area;
        }
        while(!s.empty())
        {
            topv=s.top();
            s.pop();
            area=arr[topv]*(s.empty() ? i :
                                i - s.top() - 1);
 
            marea=max(area,marea);
        }
        return marea;
        }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends
