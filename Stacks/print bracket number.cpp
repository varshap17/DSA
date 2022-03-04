#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

	vector<int> barcketNumbers(string S)
	{
	    vector<int>ans;
	    stack<char> s;
	    stack<int> st;
	    int count=0;
	    for(int i=0;i<S.length();i++)
	    {
	        char ch=S[i];
	        if(ch=='(')
	        {
	            count++;
	            s.push(ch);
	            st.push(count);
	            ans.push_back(count);
	        }
	        else if(ch==')')
	        {
	            char c=s.top();
	            if(c=='(')
	            {
	                ans.push_back(st.top());
	                st.pop();
	                s.pop();
	            }
	        }
	    }
	    return ans;
	}
};

// { Driver Code Starts.

int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	    Solution ob;

   		vector<int> ans = ob.barcketNumbers(s);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}  // } Driver Code Ends
