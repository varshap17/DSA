class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        double ans=0.0;
        int n=nums.size();
        int sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
        }
        int i=k;
        int j=0;
        int msum=sum;
        while(i<n)
        {
            sum+=nums[i];
            sum-=nums[j];
            msum=max(msum,sum);
            i++;
            j++;
        }
        ans=double(msum)/double(k);
        return ans;
    }
};
