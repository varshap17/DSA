char profession(int level, int pos)
    {
        int n = pos-1,cnt=0;
        while(n)
        {
            n&=(n-1);
            cnt++;
        }
        return cnt&1 ? 'd' : 'e';
    }
