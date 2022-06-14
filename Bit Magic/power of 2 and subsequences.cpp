long long numberOfSubsequences(int N, long long A[])
    {
        long long count=0;
        for(int i=0;i<N;i++)
        {
            if(A[i]!=0 && (A[i]&(A[i]-1))==0)
            {
                count++;
            }
        }
        if(count==0)
        {
            return 0;
        }
        else
        {
            return ((1<<count)-1);
        }
    }
