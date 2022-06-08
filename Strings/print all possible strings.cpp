void permute(char str[],vector<string> &ans,string a,int index)
{
    if(index==strlen(str))
    {
        ans.push_back(a);
        return ;
    }
    permute(str,ans,a+str[index],index+1);
    if(index!=strlen(str)-1)
    {
        permute(str,ans,a+str[index]+" ",index+1);
    }
}
vector<string>  spaceString(char str[])
{
    vector<string> ans;
    int n=strlen(str);
    string a="";
    permute(str,ans,a,0);
    return ans;
}
