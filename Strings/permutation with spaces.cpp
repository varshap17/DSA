void rec(int i,string s,string curr,vector<string>&ans)
    {
        if(i==s.length())
        {
            ans.push_back(curr);
            return ;
        }
        if(i!=0)
        {
            rec(i+1,s,curr+" "+s[i],ans);
        }
        rec(i+1,s,curr+s[i],ans);
    }
    vector<string> permutation(string S)
    {
        vector<string> ans;
        string curr="";
        rec(0,S,curr,ans);
        return ans;
    }
