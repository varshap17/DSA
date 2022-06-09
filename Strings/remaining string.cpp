string printString(string &S, char ch, int count)
	{
	    string ans;
	    map<char,int> m;
	    int n=S.length();
	    if(count==0)
	    {
	        return S;
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(S[i]==ch)
	        {
	            m[S[i]]++;
	        }
	        if(m[S[i]]==count)
	        {
	            ans=S.substr(i+1,n-1);
	        }
	    }
	    return ans.length()==0?"Empty string":ans;
	}
