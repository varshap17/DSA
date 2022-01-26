
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
	public:
	string digitsNum(int N)
	{
	    int n=N;
	    string ans="";
	    while(N>9)
	    {
	        ans='9'+ans;
	        N-=9;
	    }
	    if(N!=0)
	    {
	        ans=char(N+'0')+ans;
	    }
	    for(int i=0;i<n;i++)
	    {
	        ans+='0';
	    }
	    return ans;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		string ans = ob.digitsNum(n);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends
