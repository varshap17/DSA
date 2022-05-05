string tohex(int n)
    {
        string ans="";
        while(n>0)
        {
            int temp=n%16;
            n=n/16;
            if(temp>=10)
            {
                ans+=('a'+(temp-10));
            }
            else
            {
                ans+=('0'+temp);
            }
        }
        return ans;
    }
    string encryptString(string s) 
    {
        string ans="";
        int n=s.length();
        int count=1;
        char c=s[0];
        for(int i=1;i<n;i++)
        {
            if(s[i]==c)
            {
                count++;
            }
            else
            {
                ans+=c;
                ans+=(tohex(count));
                c=s[i];
                count=1;
            }
        }
        ans+=c;
        ans+=(tohex(count));
        reverse(ans.begin(),ans.end());
        return ans;
    }
