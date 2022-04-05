#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int countSquare(int B)
    {
	    int fact=1;
	    for(int i=B/2-1;i>1;i--)
	    {
	        fact+=i;
	    }
	    return fact;
    }
};



// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int B,count;
    	cin>>B;
    	Solution ob;
    	count = ob.countSquare(B);
    	cout<<count<<endl;
    }
}  // } Driver Code Ends
