//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    void follPatt(string s)
    {
       int c=0;
       int r=0;
       for(int i=0;i<s.length();i++)
       {
           if(s[i]=='x')
           {
               c++;
           }
           if(s[i]=='y')
           {
               c--;
               if(s[i+1]=='x' && c!=0)
               {
                   r=0;
                   break;
               }
           }
       }
       if(c==0)
       {
           r=1;
       }
       else
       {
           r=0;
       }
       cout<<r;
       cout<<endl;
    }
};

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;

	while(t--)
	{
	    
	    string s;
	    cin>>s;
	    Solution obj;
	    //function call
	    obj.follPatt(s);
	   
	}
	return 0;
}  // } Driver Code Ends
