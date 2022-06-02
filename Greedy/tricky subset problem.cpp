int isPossible(long long S, long long N, long long X, long long A[])
    {
        vector<long long> ans;
        ans.push_back(S);
        long long sum=0;
        long long c=0;
        ans.push_back(S+A[0]);
        c=ans[0]+ans[1];
        for(int i=1;i<N;i++)
        {
            sum=c+A[i];
            if(sum>X)
            {
                break;
            }
            ans.push_back(sum);
            c=c+sum;
        }
        int res = 0;
        for(long long int i = ans.size() - 1; i >= 0; i--)
        {
            if(ans[i] > X)
            {
                continue;
            }
            else
            {
                X -= ans[i];
            }
            if(X == 0)
            {
                return 1;
            }
        }
        return res;
    }
