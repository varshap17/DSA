#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        stack <long long> st;
        vector<long long> s;
        st.push(arr[n-1]);
        s.push_back(-1);
        for(int i=n-2;i>=0;i--)
        {
            while(!st.empty() && st.top()<=arr[i])
            {
                st.pop();
            }
            long long sg=st.empty()?-1:st.top();
            s.push_back(sg);
            st.push(arr[i]);
        }
        reverse(s.begin(),s.end());
        return s;
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
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends
