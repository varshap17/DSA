void permute(string S,vector<string> &ans,int l,int r)
    {
        if(l==r)
        {
            ans.push_back(S);
        }
        else
        {
            for(int i=l;i<=r;i++)
            {
                swap(S[l],S[i]);
                permute(S,ans,l+1,r);
                swap(S[l],S[i]);
            }
        }
    }
    vector<string> permutation(string S)
    {
        vector<string> ans;
        int n=S.length();
        permute(S,ans,0,S.length()-1);
        sort(ans.begin(),ans.end());
        return ans;
    }
