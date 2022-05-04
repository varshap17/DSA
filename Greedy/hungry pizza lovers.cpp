vector<int> permute(vector<vector<int>> &arr, int n)
{
    vector<int> ans;
    map<int,vector<int>> m;
    for(int i=0;i<n;i++)
    {
        m[arr[i][0]+arr[i][1]].push_back(i+1);
        sort(m[arr[i][0]+arr[i][1]].begin(),m[arr[i][0]+arr[i][1]].end());
    }
    for(auto x:m)
    {
        vector<int> a=x.second;
        for(int i=0;i<a.size();i++)
        {
            ans.push_back(a[i]);
        }
    }
    return ans;
}
