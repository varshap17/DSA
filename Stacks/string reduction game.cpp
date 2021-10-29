
#include <bits/stdc++.h> 
using namespace std; 
string findWinner(string s) ;


 // } Driver Code Ends
//User function Template for C++

string findWinner(string s) 
{
    int count=0;
    int l=s.length();
    stack <char> st;
    for(int i=0;i<l;i++)
    {
        if(st.empty() || st.top()!=s[i])
        {
            st.push(s[i]);
        }
        else
        {
            count++;
            st.pop();
        }
    }
    if(count%2==0)
    {
        return "Pippin";
    }
    else
    {
        return "Merry";
    }
}

// { Driver Code Starts.

int main() 
{ 
	int t; 
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		cout<<findWinner(s)<<endl; 
	}
	return 0; 
} 

  // } Driver Code Ends
