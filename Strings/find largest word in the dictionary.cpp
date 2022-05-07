string findLongestWord(string S, vector<string> d) 
    {
        sort(d.begin(),d.end());
        int n=d.size();
        string ans="";
        int n1=S.length();
        for(int i=0;i<n;i++)
        {
            int n2=d[i].length();
            if(n2>n1)
            {
                continue;
            }
            int j=0;
            int k=0;
            while(k<n1 && j<n1)
            {
                if(S[k]==d[i][j])
                {
                    j++;
                }
                k++;
            }
            if(j==n2)
            {
                if(ans.length()<d[i].length())
                {
                    ans=d[i];
                }
            }
        }
        return ans;
    }
