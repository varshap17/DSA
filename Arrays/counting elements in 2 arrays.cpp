// C++ implementation of For each element in 1st 
// array count elements less than or equal to it
// in 2nd array
#include <bits/stdc++.h>
 
using namespace std;


 // } Driver Code Ends
// function to count for each element in 1st array,
// elements less than or equal to it in 2nd array
class Solution{
  public:
    int binarysearch(int arr[],int n,int find)
    {
        int start=0;
        int end=n-1;
        int mid;
        while(start<=end)
        {
            mid=(start+end)/2;
            if(arr[mid]<=find)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return end;
    }
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
        vector<int> ans;
        sort(arr2,arr2+n);
        for(int i=0;i<m;i++)
        {
            int c=0;
            int a=arr1[i];
            ans.push_back(binarysearch(arr2,n,a)+1);
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int arr1[m],arr2[n];
        for(int i=0;i<m;i++)
        cin>>arr1[i];
        for(int j=0;j<n;j++)
        cin>>arr2[j];
        Solution obj;
        vector <int> res = obj.countEleLessThanOrEqual(arr1, arr2, m, n);
        for (int i = 0; i < res.size (); i++) cout << res[i] << " ";
        
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
