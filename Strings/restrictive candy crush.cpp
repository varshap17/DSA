class Solution{
    public:
    string Reduced_String(int k,string s)
    {
        if(k==1)
        {
            return "";
        }
        string ans="";
        int n=s.length();
        stack<pair<char,int>> st;
        for(int i=0;i<n;i++)
        {
            char ch=s[i];
            if(st.empty())
            {
                st.push({ch,1});
            }
            else if(st.top().first==ch)
            {
                if(st.top().second==k-1)
                {
                    st.pop();
                }
                else 
                {
                    int temp=st.top().second++;
                }
            }
            else
            {
                st.push({ch,1});
            }
        }
        while(!st.empty())
        {
            while(st.top().second--)
            {
                ans+=st.top().first;
            }
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }


};
