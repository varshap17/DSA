class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) 
    {
        
        vector<vector<int>> res;
        vector<int> cur;
        
        dfs(res, cur, 1, 0, 0, k, n);
        
        return res;
    }
    
    void dfs(vector<vector<int>>& res, vector<int>& cur, int idx, int cur_k, int cur_n, int     k, int n) 
    {
        
        // Edge Case
        if (cur_k > k || cur_n > n) return ;
        else if (k == cur_k) 
        {
            if (cur_n == n) res.push_back(cur);
            return ;
        }
        
        //
        for (int i=idx; i<10; i++) 
        {
            cur.push_back(i);
            dfs(res, cur, i + 1, cur_k + 1, cur_n + i, k, n);
            cur.pop_back();
        }
    }
};
