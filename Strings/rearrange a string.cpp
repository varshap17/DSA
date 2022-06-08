string arrangeString(string str)
    {
        string ans="";
        int arr[26]={0};
        int sum=0;
        int dig=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                arr[str[i]-'A']++;
            }
            else
            {
                dig++;
                sum+=(str[i]-'0');
            }
        }
        for(int i=0;i<26;i++)
        {
            if(arr[i])
            {
                for(int j=0;j<arr[i];j++)
                {
                    ans+=('A'+i);
                }
            }
        }
        if(dig!=0)
        {
            ans+=to_string(sum);
        }
        return ans;
    }
