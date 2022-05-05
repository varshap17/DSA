int isdivisible7(string num)
    {
        int n=num.length();
        int c=0;
        for(int i=0;i<n;i++)
        {
            int a=c*10+(num[i]-'0');
            c=a%7;
        }
        if(c==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
