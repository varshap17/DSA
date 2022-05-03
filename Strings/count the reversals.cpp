int countRev (string s)
{
    if(s.length()%2!=0)
    {
        return -1;
    }
    stack<char> st;
    int ans=0;
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        if(ch=='{')
        {
            st.push(ch);
        }
        else 
        {
            if(st.empty())
            {
                ans=ans+1;
                st.push(ch);
            }
            else
            {
                st.pop();
            }
        }
    }
    if(st.size()%2==0)
    {
        ans+=st.size()/2;
        return ans;
    }
    else
    {
        return -1;
    }
}
