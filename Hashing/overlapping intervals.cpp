vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) 
    {
         vector<vector<int>> ans;
         sort(intervals.begin(),intervals.end());
         ans.push_back(intervals[0]);
         int n=intervals.size();
         int i=1;
         while(i<n)
         {
             pair<int,int> p={ans[ans.size()-1][0],ans[ans.size()-1][1]};
             if(p.second>=intervals[i][0])
             {
                 ans.pop_back();
                 int g=(p.second>intervals[i][1]?p.second:intervals[i][1]);
                 ans.push_back({p.first,g});
             }
             else
             {
                 ans.push_back(intervals[i]);
             }
             i++;
         }
         return ans;
    }
