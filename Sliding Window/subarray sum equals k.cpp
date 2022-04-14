class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int n=nums.size();
        int sum=0;
        map<int,int> m;
        m[sum]=1;
        int c=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(m.find(sum-k)!=m.end())
            {
                c+=m[sum-k];
            }
            m[sum]++;
        }
        return c;
    }
};

