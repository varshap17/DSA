int findPosition(int N) 
    {
        int c=0;
        int j=0;
        int pos=0;
        if(N==0)
        {
            return -1;
        }
        while(N>0)
        {
            if(N&1)
            {
                c++;
            }
            if(c==1)
            {
                pos=j+1;
            }
            j++;
            if(c>1)
            {
                return -1;
            }
            N=N>>1;
        }
        return pos;
    }
