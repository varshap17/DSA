string removeDuplicates(string str) 
	{
	    unordered_map<char,int> m;
	    int n=str.length();
	    for(int i=0;i<n;i++)
	    {
	        m[str[i]]++;
	    }
	    string ans="";
	    for(int i=0;i<n;i++)
	    {
	        if(m[str[i]])
	        {
	            ans+=str[i];
	            m.erase(str[i]);
	        }
	    }
	    return ans;
	}
