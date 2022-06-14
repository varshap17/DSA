int findWinner(int n, int A[])
    {
        int k=0;
        for(int i=0;i<n;i++)
        {
            k=k^A[i];
        }
        if(k==0)
        {
            return 1;
        }
        if(n%2==0)
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
