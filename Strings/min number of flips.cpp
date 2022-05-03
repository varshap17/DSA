int minFlips (string s)
{
    int n=s.length();
    int c1=0;
    int c2=0;
    int a=1;
    int b=0;
    for(int i=0;i<n;i++)
    {
        if((s[i]-'0')!=a)
        {
            c1++;
        }
        a=a^1;
    }
    for(int j=0;j<n;j++)
    {
        if((s[j]-'0')!=b)
        {
            c2++;
        }
        b=b^1;
    }
    return min(c1,c2);
}
