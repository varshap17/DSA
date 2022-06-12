class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) 
    {
        int n=nums.size();
        map<int,int> m;
        int sum=0;
        int msum=INT_MIN;
        int j=0;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
            sum+=nums[i];
            if(m[nums[i]]>1)
            {
                while(m[nums[i]]!=1)
                {
                    m[nums[j]]--;
                    sum-=nums[j];
                    j++;
                }
            }
            else
            {
                msum=max(msum,sum);
            }
        }
        return msum;
    }
};
