long long ExtractNumber(string S)
    {
        int n=S.length();
        long long maxi=0;
        long long sum=0;
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(isdigit(S[i]))
            {
                string s="";
                sum=0;
                k=0;
                while(isdigit(S[i]))
                {
                    if(S[i]=='9')
                    {
                        k++;
                    }
                    s+=S[i];
                    i++;
                }
                if(k==0)
                {
                    for(int j=0;j<s.length();j++)
                    {
                        sum=(sum*10)+(s[j]-'0');
                    }
                }
                maxi=max(maxi,sum);
            }
        }
        if(maxi==0)
        {
            return -1;
        }
        return maxi;
    }
