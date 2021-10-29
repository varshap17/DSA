#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) 
	{
	    vector<int> v;
	    string sym="!#$%&*@^~";
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<sym.length();j++)
	        {
	            if(sym[j]==nuts[i])
	            {
	                v.push_back(j);
	            }
	        }
	    }
	    sort(v.begin(),v.end());
	    for(int i=0;i<n;i++)
	    {
	        nuts[i]=sym[v[i]];
	        bolts[i]=sym[v[i]];
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
        char nuts[n], bolts[n];
        for (int i = 0; i < n; i++) {
            cin >> nuts[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> bolts[i];
        }
        Solution ob;
        ob.matchPairs(nuts, bolts, n);
        for (int i = 0; i < n; i++) {
            cout << nuts[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << bolts[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
