#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) 
	{
	    map<char,int> m;
	    for(int i=0;i<n;i++)
	    {
	        m[nuts[i]]++;
	    }
	    char arr[9]={'!','#','$','%','&','*','@','^','~'};
	    int j=0;
	    for(int i=0;i<9;i++)
	    {
	        if(m.find(arr[i])!=m.end())
	        {
	            nuts[j]=arr[i];
	            bolts[j]=arr[i];
	            j++;
	        }
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
