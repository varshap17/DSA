class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int n=nums.size();
        vector<int> ans;
        int first=-1;
        int end=-1;
        int l=0;
        int r=n-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]==target)
            {
                first=mid;
                r=mid-1;
            }
            else if(nums[mid]<target)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        l=0;
        r=n-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]==target)
            {
                end=mid;
                l=mid+1;
            }
            else if(nums[mid]<target)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        ans.push_back(first);
        ans.push_back(end);
        return ans;
    }
};
