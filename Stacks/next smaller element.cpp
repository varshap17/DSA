//Initial Template for C++

#include <bits/stdc++.h> 
#include <unordered_map>
using namespace std; 


 // } Driver Code Ends
//User function Template for C++

vector<int> help_classmate(vector<int> arr, int n) 
{ 
    stack <int> st;
        vector<int> s;
        st.push(arr[n-1]);
        s.push_back(-1);
        for(int i=n-2;i>=0;i--)
        {
            while(!st.empty() && st.top()>=arr[i])
            {
                st.pop();
            }
            int sg=st.empty()?-1:st.top();
            s.push_back(sg);
            st.push(arr[i]);
        }
        reverse(s.begin(),s.end());
        return s;
} 

// { Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> array(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>array[i];
		}
		vector<int> result = help_classmate(array,n);
		for (int i = 0; i < n; ++i)
		{
			cout<<result[i]<<" ";
		}
		cout<<"\n";
	}
	return 0; 
}

  // } Driver Code Ends
