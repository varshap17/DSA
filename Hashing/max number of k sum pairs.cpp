class Solution {
public:
    int maxOperations(vector<int>& nums, int k) 
    {
        map<int,int> m;
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            int temp=k-nums[i];
            if(m[temp]>0)
            {
                c++;
                m[temp]--;
            }
            else
            {
                m[nums[i]]++;
            }
        }
        return c;
    }
};
