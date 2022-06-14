vector<int> constructList(vector<vector<int>> Q, int N) 
    {
        vector<int> ans;
        int x=0;
        for(int i=N-1;i>=0;i--)
        {
            if(Q[i][0]==0)
            {
                ans.push_back(Q[i][1]^x);
            }
            else
            {
                x=x^Q[i][1];
            }
        }
        ans.push_back(0^x);
        sort(ans.begin(),ans.end());
        return ans;
    }
