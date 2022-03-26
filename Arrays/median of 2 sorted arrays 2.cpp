class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> num;
        int n=nums1.size();
        int m=nums2.size();
        for(int i=0;i<n;i++)
        {
            num.push_back(nums1[i]);
        }
        for(int i=0;i<m;i++)
        {
            num.push_back(nums2[i]);
        }
        sort(num.begin(),num.end());
        int s=(n+m)/2;
        if((n+m)%2==0)
        {
            return double(num[s]+num[s-1])/2;
        }
        else
        {
            return num[s];
        }
    }
};
