class Solution{
public:
    int maxLength(string s)
    {
        int n=s.length();
        stack<pair<char,int>> st;
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            char c=s[i];
            if(c=='(')
            {
                st.push({c,i});
            }
            else
            {
                if(st.empty())
                {
                    st.push({c,i});
                }
                else if(st.top().first=='(')
                {
                    st.pop();
                    if(!st.empty())
                    {
                        maxi=max(maxi,i-st.top().second);
                    }
                    else 
                    {
                        maxi=max(maxi,i+1);
                    }
                }
                else
                {
                    st.push({c,i});
                }
            }
        }
        return maxi;
    }
};
