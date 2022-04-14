class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        int n=nums.size();
        int i=0;
        map<int,int> m;
        while(i<n)
        {
            if(m.find(nums[i])!=m.end())
            {
                if(abs(m[nums[i]]-i)<=k)
                {
                    return true;
                }
                m[nums[i]]=i;
            }
            else
            {
                m[nums[i]]=i;
            }
            i++;
        }
        return false;
    }
};
