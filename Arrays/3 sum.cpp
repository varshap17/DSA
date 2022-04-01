class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        
        if(nums.size() < 3) 
            return ans;
        
        if(nums[0] >= 1) 
            return ans;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<=0){
                int target = -nums[i];
                int l = i+1;
                int r = nums.size() - 1;
                while(l<r){
                    if(nums[l] + nums[r] == target){
                        vector<int>triplet = {nums[i],nums[l],nums[r]};
                        ans.push_back(triplet);
                    
                        while(l<r and nums[l] == nums[l+1]) l++; 
                        while(l<r and nums[r] == nums[r-1]) r--; 
                        l++;
                        r--;
                    }
                    else if(nums[l] + nums[r] < target){
                        l++;
                    }
                    else
                        r--;
                }
            }
            while(i+1<nums.size() and nums[i+1] == nums[i]){
                i++;
            }
        }
        return ans;
    }
};
