bool sameFreq(string s)
	{
	    int n=s.length();
	    unordered_map<char,int> m;
	    unordered_set<int> st;
	    vector<int> v;
	    for(int i=0;i<n;i++)
	    {
	        m[s[i]]++;
	    }
	    for(auto it:m)
	    {
	        st.insert(it.second);
	    }
	    if(st.size()==1)
	    {
	        return true;
	    }
	    if(st.size()>2)
	    {
	        return false;
	    }
	    for(auto it :st)
	    {
	        if(it==1)
	        {
	            return true;
	        }
	        else
	        {
	            v.push_back(it);
	            if(abs(v[0]-v[1]==1))
	            {
	                return true;
	            }
	        }
	    }
	    return false;
	}
