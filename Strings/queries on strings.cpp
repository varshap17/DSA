class Solution {
public:
	vector<int>SolveQueris(string str, vector<vector<int>>Query)
	{
	    vector<int> ans;
	    int n=str.length();
	    set<int>s;
	    for(int i=0;i<Query.size();i++)
	    {
	        for(int j=Query[i][0]-1;j<=Query[i][1]-1;j++)
	        {
	            s.insert(str[j]);
	        }
	        ans.push_back(s.size());
	        s.clear();
	    }
	    return ans;
	}
};
