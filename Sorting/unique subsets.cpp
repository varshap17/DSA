vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        sort(arr.begin(),arr.end());
        vector<vector<int>> vv;
        set<vector<int>> st;
        for(int i=0;i<(1<<n);i++)
        {
            vector<int> v;
            for(int j=0;j<n;j++)
            {
                if(i&(1<<j))
                {
                    v.push_back(arr[j]);
                }
            }
            st.insert(v);
        }
        for(auto it:st)
        {
            vv.push_back(it);
        }
        return vv;
    }
