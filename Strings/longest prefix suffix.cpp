int lps(string s) 
	{
	    int n=s.length();
	    int i=0;
	    int j=1;
	    int k=1;
	    int count;
	    while(k<n)
	    {
	        j=k;
	        count=0;
	        i=0;
	        while(j<n && s[i]!=s[j])
	        {
	            j++;
	        }
	        while(j<n && s[i]==s[j])
	        {
	            j++;
	            i++;
	            count++;
	        }
	        if(j==n && count>0)
	        {
	            return count;
	        }
	        k++;
	    }
	    return count;
	}
