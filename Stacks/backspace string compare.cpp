class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        stack<char> s1,s2;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]!='#')
            {
                s1.push(s[i]);
            }
            else if(s1.size()!=0)
            {
                s1.pop();
            }
        }
        int m=t.length();
        for(int i=0;i<m;i++)
        {
            if(t[i]!='#')
            {
                s2.push(t[i]);
            }
            else if(s2.size()!=0)
            {
                s2.pop();
            }
        }
        while(s1.size()!=0 && s2.size()!=0)
        {
            if(s1.top()!=s2.top())
            {
                return false;
            }
            s1.pop();
            s2.pop();
        }
        if(s1.empty() && s2.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
