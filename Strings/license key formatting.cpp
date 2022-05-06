string ReFormatString(string S, int K)
    {
    	string ans="";
    	int n=S.length();
    	int c=0;
    	for(int i=n-1;i>=0;i--)
    	{
    	    if(S[i]=='-')
    	    {
    	        continue;
    	    }
    	    if(c==K)
    	    {
    	        ans+='-';
    	        c=0;
    	    }
    	    ans+=toupper(S[i]);
    	    c++;
    	}
    	reverse(ans.begin(),ans.end());
    	return ans;
    }
