int isPowerOfFour(unsigned int n)
    {
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return 1;
        }
        while(n>0)
        {
            if(n%4==0)
            {
                return isPowerOfFour(n/4);
            }
            else
            {
                return 0;
            }
        }
        return 1;
    }
