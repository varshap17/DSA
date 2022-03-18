class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int n=nums.size();
        int l=0;
        int h=n-1;
        if(target<nums[l])
        {
            return 0;
        }
        if(target>nums[h])
        {
            return n;
        }
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            if(nums[mid]<target && nums[mid+1]>target)
            {
                return mid+1;
            }
            if(nums[mid]<target)
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
        return n;
    }
};
