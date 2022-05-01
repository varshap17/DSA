int fun(string s)
{
    int n=s.length();
    map<string,int> m;
    int c=0;
    for(int i=0;i<n-1;i++)
    {
        m[s.substr(i,2)]=1;
    }
    return m.size();
    
}
