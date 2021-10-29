#include <bits/stdc++.h>
using namespace std;

vector<string> findMatchedWords(vector<string> dict,string pattern);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> s(n);
		for(int i=0;i<n;i++)
		    cin>>s[i];
		
		string tt;
		cin>>tt;
		
		vector<string> res = findMatchedWords(s,tt);
        sort(res.begin(),res.end());
		for(int i=0;i<res.size();i++)
		    cout<<res[i]<<" ";
		cout<<endl;
		
	}
}// } Driver Code Ends


/* The function returns a  vector of strings 
present in the dictionary which matches
the string pattern.
You are required to complete this method */
vector<string> findMatchedWords(vector<string> dict,string pattern)
{
      vector<string> ans;
      map<char,int> mp1;
      for(int i=0;i<pattern.length();i++)
      {
          mp1[pattern[i]]++;
      }
      for(int j=0;j<dict.size();j++)
      {
          map<char,int> mp2;
          string s=dict[j];
          if(pattern.length()==s.length())
          {
            for(int k=0;k<s.size();k++)
            {
                mp2[s[k]]++;
            }
            for(int i=0;i<pattern.length();i++)
            {
                if(mp1[pattern[i]]!=mp2[s[i]])
                {
                    break;
                }
                if(i==pattern.length()-1)
                {
                    ans.push_back(s);
                }
            }
          }
      }
      return ans;
}
