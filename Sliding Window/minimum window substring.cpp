class Solution {
public:
    string minWindow(string s, string t) 
    {
        map<char,int> m;
        int n=t.length();
        for(int i=0;i<n;i++)
        {
            m[t[i]]++;
        }
        int c=m.size();
        int begin=0;
        int end=0;
        int len=INT_MAX;
        string ans="";
        while(end<s.length())
        {
            char send=s[end];
            if(m.find(send)!=m.end())
            {
                m[send]--;
                if(m[send]==0)
                {
                    c--;
                }
            }
            end++;
            while(c==0)
            {
                if(end-begin<len)
                {
                    len=end-begin;
                    ans=s.substr(begin,end-begin);
                }
                int startchar = s[begin];
                
                if(m.count(startchar) == 1)
                {
                   m[startchar]++;
                   if(m[startchar] > 0) 
                   {
                       c++;
                   }
                }
                begin++;
            }
        }
        return ans;
    }
};
