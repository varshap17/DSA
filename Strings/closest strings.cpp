int shortestDistance(vector<string> &s, string word1, string word2)
	{
		int n=s.size();
		int c1=-1,c2=-1,count=INT_MAX;
		for(int i=0;i<n;i++)
		{
		    if(s[i]==word1)
		    {
		        c1=i;
		    }
		    if(s[i]==word2)
		    {
		        c2=i;
		    }
		    if(c1!=-1 && c2!=-1)
		    {
		        count=min(count,abs(c1-c2));
		    }
		}
		return count;
	}
