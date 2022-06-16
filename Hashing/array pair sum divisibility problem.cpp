bool canPair(vector<int> nums, int k) 
    {
        int n=nums.size();
        if(n%2!=0)
        {
            return false;
        }
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            nums[i]=nums[i]%k;
            m[nums[i]]++;
        }
        if(m[0]%2!=0)
        {
            return false;
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                if(m[nums[i]]!=m[k-nums[i]])
                {
                    return false;
                }
            }
        }
        return true;
    }
