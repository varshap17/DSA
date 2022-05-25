int maxBinTreeGCD(vector<vector<int>> arr, int N) 
    {
        unordered_map<int,int> mp;
        int mx=0;
        for(auto v:arr)
        {
            if(mp.count(v[0]))
            {
                mx=max(mx,__gcd(mp[v[0]],v[1]));
            }
            else
            {
                mp[v[0]]=v[1];
            }
        }
        return mx;
    }
