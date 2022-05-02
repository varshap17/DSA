class Solution{
    public:
	string printMinIndexChar(string S, string patt)
	{
	    string ans="";
	    map<char,int> m;
	    int n=S.length();
	    for(int i=0;i<n;i++)
	    {
	        if(m.find(S[i])==m.end())
	        {
	            m[S[i]]=i;
	        }
	    }
	    int nn=patt.length();
	    int mini=INT_MAX;
	    for(int i=0;i<nn;i++)
	    {
	        if(m.find(patt[i])!=m.end() && m[patt[i]]<mini)
	        {
	            mini=m[patt[i]];
	            ans=patt[i];
	        }
	    }
	    if(ans=="")
	    {
	        return "$";
	    }
	    else
	    {
	        return ans;
	    }
	}
};
