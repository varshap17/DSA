int isRepeat(string s)
	{
	    int n=s.length();
	    int i=1;
	    int j=0;
	    while(i<n)
	    {
	        if(s[i]==s[j])
	        {
	            i++;
	            j++;
	        }
	        else 
	        {
	            i=i-j+1;
	            j=0;
	        }
	    }
	    if(j==0)
	    {
	        return 0;
	    }
	    return n%(n-j)==0;
	}
