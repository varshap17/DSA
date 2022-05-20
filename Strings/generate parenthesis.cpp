void generate(int n,int left,int right,string temp,vector<string>&ans)
    {
        if(left==right && right==n)
        {
            ans.push_back(temp);
            return ;
        }
        if(left<n)
        {
            generate(n,left+1,right,temp+"(",ans);
        }
        if(left>right)
        {
            generate(n,left,right+1,temp+")",ans);
        }
    }
    vector<string> AllParenthesis(int n) 
    {
        vector<string> ans;
        generate(n,0,0,"",ans);
        return ans;
    }
