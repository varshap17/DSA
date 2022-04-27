class Solution{
	
	public:
	vector<int> downwardDigonal(int n, vector<vector<int>> mat)
	{
		vector<int> ans;
        map<int,deque<int>> m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                m[i+j].push_back(mat[i][j]);
            }
        }
        for(int i=0;i<=(n*2);i++)
        {
            int ma=m[i].size();
            while(ma--)
            {
                ans.push_back(m[i].front());
                m[i].pop_front();
            }
        }
        return ans;
	}
};
