#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) 
    {
        vector <int> result;
        vector<pair<int,int>> m;
        map<int,int> ma;
        for(int i=0;i<nums.size();i++)
        {
            ma[nums[i]]++;
        }
        for(auto x:ma)
        {
            m.push_back(make_pair(x.second,x.first));
        }
        sort(m.begin(),m.end(),greater<>());
        for(int i=0;i<k;i++)
        {
            result.push_back(m[i].second);
        }
        return result;
    }
};


// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends
