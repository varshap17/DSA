class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) 
    {
        vector<int> a(nums.size(),0);
        int even=0;
        int odd=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                a[even]=nums[i];
                even+=2;
            }
            else
            {
                a[odd]=nums[i];
                odd+=2;
            }
        }
        return a;
    }
};
