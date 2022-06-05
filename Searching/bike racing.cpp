bool fn(long T,long L,long S[],long A[],long N,long M)
    {
        long ans=0;
        for(int i=0;i<N;i++)
        {
            long x=S[i]+A[i]*T;
            ans+= x>=L ? x:0;
        }
        return ans>=M;
    }
    long buzzTime(long N, long M, long L, long H[], long A[])
    {
        long low=0,high=M,mid;
    
        while(low<high)
        {
            mid= low+(high-low)/2;
            if(fn(mid,L,H,A,N,M))
                high=mid;
            else
                low=mid+1;
        }
        return high;
    }
