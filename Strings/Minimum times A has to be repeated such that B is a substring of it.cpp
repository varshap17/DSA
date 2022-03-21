#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int minRepeats(string A, string B) 
    {
        int ct=1;
        int n=A.length();
        int m=B.length();
        string s=A;
        while(ct<m/n+1 && s.find(B)==-1)
        {
            ct++;
            s=s+A;
        }
        if(s.find(B)==-1)
        {
            return -1;
        }
        return ct;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    scanf("%d ",&t);
    while (t--) {
        string A,B;
        getline(cin,A);
        getline(cin,B);

        Solution ob;
        cout << ob.minRepeats(A,B) << endl;
    }
    return 0;
}  // } Driver Code Ends
