//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

string printNumber(string , int);

// User function pasted here
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,temp;
		cin>>s;
		int i,len=s.length();
		
		cout << printNumber(s,len) << "\n";
	}
	return 0;
}// } Driver Code Ends


//User function template for C++


//Function to find matching decimal representation of a string as on the keypad.
string printNumber(string s, int n) 
{
    string ans;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]<=99)
        {
            ans+="2";
        }
        else if(s[i]<=102)
        {
            ans+="3";
        }
        else if(s[i]<=105)
        {
            ans+="4";
        }
        else if(s[i]<=108)
        {
            ans+="5";
        }
        else if(s[i]<=111)
        {
            ans+="6";
        }
        else if(s[i]<=115)
        {
            ans+="7";
        }
        else if(s[i]<=118)
        {
            ans+="8";
        }
        else
        {
            ans+="9";
        }
    }
    return ans;
}
