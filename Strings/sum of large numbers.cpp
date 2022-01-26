
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
	public:
   	string add(string s1, string s2)
   	{
   	    reverse(s1.begin(),s1.end());
   	    reverse(s2.begin(),s2.end());
   	    int n=s1.length();
   	    int m=s2.length();
   	    int i=0;
   	    int j=0;
   	    int c=0;
   	    string ans="";
   	    while(i<n && j<m)
   	    {
   	        int n1=s1[i]-'0';
   	        int n2=s2[j]-'0';
   	        int sum=n1+n2+c;
   	        int rem=sum%10;
   	        c=sum/10;
   	        ans=ans+char(rem+'0');
   	        i++;
   	        j++;
   	    }
   	    while(i<n)
   	    {
   	        int n1=s1[i]-'0';
   	        int sum=n1+c;
   	        c=sum/10;
   	        int rem=sum%10;
   	        ans=ans+char(rem+'0');
   	        i++;
   	    }
   	    while(j<m)
   	    {
   	        int n1=s2[j]-'0';
   	        int sum=n1+c;
   	        c=sum/10;
   	        int rem=sum%10;
   	        ans=ans+char(rem+'0');
   	        j++;
   	    }
   	    if(c==1)
   	    {
   	        ans=ans+char(c+'0');
   	    }
   	    reverse(ans.begin(),ans.end());
   	    return ans;
   	}    
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s1, s2;
		cin >> s1 >> s2;
		Solution ob;
		string ans = ob.add(s1, s2);
		cout << ans <<"\n";
	}  
	return 0;
}  // } Driver Code Ends
