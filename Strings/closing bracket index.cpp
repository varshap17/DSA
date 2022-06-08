int closing (string s, int pos)
        {
        	stack<pair<char,int>> st;
        	int n=s.length();
        	int c=0;
        	st.push({s[pos],pos});
        	for(int i=pos+1;i<n;i++)
        	{
        	    if(s[i]=='[')
        	    {
        	        c++;
        	        st.push({s[i],i});
        	    }
        	    else if(s[i]==']' && c!=0)
        	    {
        	        st.pop();
        	        c--;
        	    }
        	    else if(s[i]==']' && c==0)
        	    {
        	        return i;
        	    }
        	}
        	return -1;
        }
