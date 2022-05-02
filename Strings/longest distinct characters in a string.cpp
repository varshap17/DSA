int longestSubstrDistinctChars (string S)
{
    map<char,int> m;
    int n=S.length();
    int j=0;
    int c=0;
    for(int i=0;i<n;i++)
    {
        m[S[i]]++;
        if(m[S[i]]>1)
        {
            while(m[S[i]]>1)
            {
                m[S[j]]--;
                j++;
            }
        }
        else
        {
            c=max(c,i-j+1);
        }
    }
    return c;
    
}
