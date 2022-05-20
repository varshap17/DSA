int findTime(string S1, string S2) 
    {
        int n1=S1.length();
        int n2=S2.length();
        map<char,int> m;
        for(int i=0;i<n1;i++)
        {
            m[S1[i]]=i;
        }
        int count=0;
        int j=0;
        for(int i=0;i<n2;i++)
        {
            count+=abs(m[S2[i]]-j);
            j=m[S2[i]];
        }
        return count;
    }
