class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        vector<int> ans;
        int n=N;
        sort(candies,candies+N);
        int can[N];
        for(int i=0;i<n;i++)
        {
            can[i]=candies[i];
        }
        int c1=0;
        for(int i=0;i<N;i++)
        {
            c1+=candies[i];
            N=N-K;
        }
        int c2=0;
        int k=0;
        for(int i=n-1;i>=k;i--)
        {
            c2+=can[i];
            k+=K;
        }
        ans.push_back(c1);
        ans.push_back(c2);
        return ans;
    }
};
