long long getSubstringWithEqual012(string str) 
    {
        int n=str.length();
        int c0=0;
        int c1=0;
        int c2=0;
        int count=0;
        map<string,int> m;
        m["0#0"]=1;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='0')
            {
                c0++;
            }
            else if(str[i]=='1')
            {
                c1++;
            }
            else
            {
                c2++;
            }
            string key=to_string(c1-c0)+'#'+to_string(c2-c1);
            if(m.find(key)!=m.end())
            {
                count+=m[key];
            }
            m[key]++;
        }
        return count;
    }
