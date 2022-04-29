bool kPangram(string str, int k)
{
    int arr[26]={0};
    int n=str.length();
    int m=0;
    for(int l=0;l<n;l++)
    {
        if(str[l]!=32)
        {
            str[m++]=str[l];
        }
    }
    if(m<26)
    {
        return false;
    }
    for(int i=0;i<m;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            arr[str[i]-'A']=1;
        }
        if(str[i]>='a' && str[i]<='z')
        {
            arr[str[i]-'a']=1;
        }
    }
    int c=0;
    for(int i=0;i<26;i++)
    {
        if(arr[i]==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        return true;
    }
    if(c<=k)
    {
        return true;
    }
    else
    {
        return false;
    }
}
