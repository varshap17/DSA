int  maximize_xor_count(int n ) 
    {
        int count=0;
        int i=1;
        while(n>0)
        {
            if(!(n&1))
            {
                count+=i;
            }
            n=n>>1;
            i=i*2;
        }
        return count;
    }
