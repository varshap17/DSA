//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
#define RANGE 255


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    string countSort(string arr)
    {
        string ans=arr;
        int m[26]={0};
        for(auto i:arr)
        {
            m[i-'a']++;
        }
        for(int i=1;i<26;i++)
        {
            m[i]+=m[i-1];
        }
        for(int i=0;i<arr.size();i++)
        {
            ans[m[arr[i]-'a']-1]=arr[i];
            m[arr[i]-'a']--;
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
        int n;
        cin>>n;
        string arr;
        cin>>arr;
        Solution obj;
        cout<<obj.countSort(arr)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
