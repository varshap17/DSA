class Solution{
public:
    int nthItem(int L1, int L2, int A[], int B[], int N)
    {
        vector<int> ans;
        map<int,int> m;
        for(int i=0;i<L1;i++)
        {
            for(int j=0;j<L2;j++)
            {
                m[A[i]+B[j]]=1;
            }
        }
        for(auto x:m)
        {
            ans.push_back(x.first);
        }
        sort(ans.begin(),ans.end());
        if(ans.size()<N)
        {
            return -1;
        }
        return ans[N-1];
    }
};
