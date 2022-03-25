class Solution {
public:
    string reverseWords(string s) 
    {
        stack<char> st;
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                while(!st.empty())
                {
                    ans+=st.top();
                    st.pop();
                }
                ans+=" ";
            }
            else 
            {
                st.push(s[i]);
            }
        }
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};
