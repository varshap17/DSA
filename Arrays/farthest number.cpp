vector<int> farNumber(int N,vector<int> Arr)
    {
        vector<int> ans;
        for(int i=0;i<N;i++)
        {
            for(int j=N-1;j>=i;j--)
            {
                if(Arr[i]>Arr[j])
                {
                    ans.push_back(j);
                    break;
                }
                if(i==j)
                {
                    ans.push_back(-1);
                }
            }
            
        }
        return ans;
    }
