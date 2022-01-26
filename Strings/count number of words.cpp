#include <bits/stdc++.h>
using namespace std;
int countWords(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<countWords(s)<<endl;
	    }
}// } Driver Code Ends


//User function Template for C++

int countWords(string s)
{
    int count=0;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(isalpha(s[i]))
        {
            count++;
        }
        while(i<n && isalpha(s[i]))
        {
            i++;
        }
        if(i<n && (s[i]=='\\'))
        {
            i++;
        }
    }
    return count;
}
