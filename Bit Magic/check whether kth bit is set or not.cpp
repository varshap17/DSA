//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++


class Solution
{
    public:
    // Function to check if Kth bit is set or not.
    bool checkKthBit(int n, int k)
    {
        string binary="";
        while(n>0)
        {
            int rem=n%2;
            n=n/2;
            binary=char(rem)+binary;
        }
        reverse(binary.begin(),binary.end());
        int count=binary.size();
        if(binary[k]==1)
        {
            return true;
        }
        else
        {
           return false;
        }
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{
	int t;
	cin>>t;//taking testcases
	while(t--)
	{
	    long long n;
	    cin>>n;//input n
	    int k;
	    cin>>k;//bit number k
	    Solution obj;
	    if(obj.checkKthBit(n, k))
	        cout << "Yes" << endl;
	    else
	        cout << "No" << endl;
	}
	return 0;
}  // } Driver Code Ends
