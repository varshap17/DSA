long long int hashString(string s) 
    {
        string x="abcdefghijklmnopqrstuvwxyz1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int j=0;
        int scount=1;
        long long int sum=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]!=32)
            {
                sum+=(j+x.find(s[i]));
                j++;
            }
            else
            {
                scount++;
                j=0;
            }
        }
        return (scount*sum);
    }
