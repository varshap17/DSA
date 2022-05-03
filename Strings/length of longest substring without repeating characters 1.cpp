class Solution{
    public:
    int longestUniqueSubsttr(string S)
    {
        vector<int> v(256,-1);
        int mx=0;
        int st=-1;
        for(int i=0;i<S.length();i++)
        {
            if(v[S[i]]>st)
            {
                st=v[S[i]];
            }
            v[S[i]]=i;
            mx=max(mx,i-st);
        }
        return mx;
    }
};
