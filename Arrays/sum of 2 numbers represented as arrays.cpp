#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	vector<int> findSum(vector<int> &a, vector<int> &b) 
	{
	    vector<int> ans;
	    int c=0;
	    int i=a.size()-1;
	    int j=b.size()-1;
	    while(i>=0 || j>=0)
	    {
	        int sum=c;
	        if(i>=0)
	        {
	            sum+=a[i--];
	        }
	        if(j>=0)
	        {
	            sum+=b[j--];
	        }
	        c=sum/10;
	        ans.push_back(sum%10);
	    }
	    if(c)
	    {
	        ans.push_back(c);
	    }
	    reverse(ans.begin(),ans.end());
	    return ans;
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        Solution ob;
        auto ans = ob.findSum(a, b);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
