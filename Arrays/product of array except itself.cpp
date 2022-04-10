class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int z=0;
        int pro=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                pro=pro*nums[i];
            }
            else
            {
                z++;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0 && z==1)
            {
                nums[i]=pro;
            }
            else if(z==0)
            {
                nums[i]=pro/nums[i];
            }
            else 
            {
                nums[i]=0;
            }
        }
        return nums;
    }
};
