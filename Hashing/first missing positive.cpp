int firstMissingPositive(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int a=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==a)
            {
                a++;
            }
        }
        return a;
    }
