pair<int,int> count(string str,int i,int j,int n)
{
    int c=0;
    int v=0;
    for(int a=i;a<=j;a++)
    {
        if(str[a]!='a' && str[a]!='A' && str[a]!='e' && str[a]!='E' &&
        str[a]!='i' && str[a]!='I' && str[a]!='o' && str[a]!='O' &&
        str[a]!='u' && str[a]!='U')
        {
            c++;
        }
        else
        {
            v++;
        }
    }
    return {c,v};
}
int calcDiff(string str)
{
    int hard=0;
    int easy=0;
    int n=str.length();
    for(int i=0;i<n;i++)
    {
        if(str[i]!=32)
        {
            int x=0;
            bool a=false;
            int j=0;
            for(j=i;str[j]!=32 && j<n;j++)
            {
                if(str[j]!='a' && str[j]!='A' && str[j]!='e' && str[j]!='E' &&
                str[j]!='i' && str[j]!='I' && str[j]!='o' && str[j]!='O' &&
                str[j]!='u' && str[j]!='U')
                {
                    x++;
                }
                else
                {
                    if(x>=4)
                    {
                        a=true;
                    }
                    x=0;
                }
            }
            pair<int,int> c=count(str,i,j-1,n);
            if(c.first>c.second || a)
            {
                hard++;
            }
            else
            {
                easy++;
            }
            i=j;
        }
    }
    return ((hard*5)+(easy*3));
}
