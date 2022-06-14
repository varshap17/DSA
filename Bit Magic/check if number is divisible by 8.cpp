int DivisibleByEight(string S)
    {
        int c=0;
        for(int i=0;i<S.length();i++)
        {
            int p=c*10+(S[i]-'0');
            c=p%8;
        }
        if(c==0)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
