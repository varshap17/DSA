int maxCoins(int A[], int B[], int T, int N) 
    {
        vector<pair<int,int>> vp;
        int ans=0;
        for(int i=0;i<N;i++)
        {
            vp.push_back({B[i],A[i]});
        }
        sort(vp.rbegin(),vp.rend());
        int i=0;
        while(T && i<N)
        {
            if(T<=0)
            {
                break;
            }
            int ct=vp[i].second;
            int gold=vp[i].first;
            while(T>0 && ct)
            {
                ans+=gold;
                T--;
                ct--;
            }
            i++;
        }
        return ans;
    }
