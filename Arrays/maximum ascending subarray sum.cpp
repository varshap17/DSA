class Solution {
public:
    int maxAscendingSum(vector<int>& nums) 
    {
        int sum=nums[0];
        int msum=sum;
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]<nums[i])
            {
                sum+=nums[i];
            }
            else
            {
                msum=max(msum,sum);
                sum=nums[i];
            }
        }
        msum=max(msum,sum);
        return msum;
    }
};
