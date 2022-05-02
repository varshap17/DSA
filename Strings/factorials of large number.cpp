class Solution {
public:
    vector<int> factorial(int N)
    {
        vector<int> ans;
        ans.push_back(1);
        for(int i=1;i<=N;i++)
        {
            if(ans.size()==0)
            {
                ans.push_back(i);
            }
            int c=0;
            int n=ans.size();
            for(int j=0;j<n;j++)
            {
                int m=ans[j]*i;
                m+=c;
                ans[j]=m%10;
                c=m/10;
            }
            while(c)
            {
                int r=c%10;
                ans.push_back(r);
                c/=10;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
