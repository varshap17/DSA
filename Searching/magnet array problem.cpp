double bs(double low, double high, double m[],int n)
    {
        double dif =1/(1e12);
        double mid = (low + high)/2;
        double net = 0;
        for(int i=0;i<n;i++)
        {
            net+=1/(mid-m[i]);
        }
        if((-dif) < net && net < dif)
        {
            return mid;
        }
        else if (net > 0)
        {
            return bs(mid, high, m,n);
        }
        else
        {
            return bs(low, mid, m,n);
        }
    }
    void nullPoints(int n, double magnets[], double getAnswer[])
    {
        for(int i=0; i<n-1; i++)
        {
            getAnswer[i] = bs(magnets[i], magnets[i+1], magnets,n);
        }
    }
