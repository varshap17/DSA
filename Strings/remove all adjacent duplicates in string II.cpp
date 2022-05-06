string removeDuplicates(string s, int k) 
    {
        string ans="";
        stack<pair<char,int>> st;
        int n=s.length();
        if(n<k)
        {
            return s;
        }
        for(int i=0;i<s.length();i++)
        {
            if(st.empty() || st.top().first!=s[i])
            {
                st.push({s[i],1});
            }
            else
            {
                pair<char,int> p=st.top();
                st.pop();
                st.push({p.first,p.second+1});
            }
            if(st.top().second==k)
            {
                st.pop();
            }
        }
        while(!st.empty())
        {
            pair<char,int> p=st.top();
            while(p.second--)
            {
                ans+=p.first;
            }
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
