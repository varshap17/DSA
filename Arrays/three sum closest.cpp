//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution{
  public:
    int threeSumClosest(vector<int> arr, int target) 
    {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int diff=INT_MAX;
        int msum=0;
        for(int i=0;i<n-2;i++)
        {
            int l=i+1;
            int r=n-1;
            while(l<r)
            {
                int sum=arr[i]+arr[l]+arr[r];
                if(sum==target)
                {
                    return target;
                }
                if(diff>abs(sum-target))
                {
                    diff=abs(sum-target);
                    msum=sum;
                }
                else if(diff==abs(sum-target))
                {
                    msum=max(msum,sum);
                }
                if(sum<target)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
        }
        return msum;
        
        
    }
};



// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while(t--) {
        
        int n,target;
        cin >> n >> target;
        
        vector<int> vec(n);
        
        for(int i = 0 ; i < n ; ++ i ) 
            cin >> vec[i];
        Solution obj;
        cout << obj.threeSumClosest(vec, target) << "\n";
    }
}

//Position this line where user code will be pasted.
  // } Driver Code Ends
