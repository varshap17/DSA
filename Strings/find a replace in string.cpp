string findAndReplace(string S ,int Q, int index[], string sources[], string targets[]) 
    {
        string ans="";
        int n=S.length();
        int i=0;
        int j=0;
        while(i<n)
        {
            if(j<Q && index[j]==i )
            {
                if(S.substr(i,sources[j].length())==sources[j])
                {
                    ans+=targets[j];
                    i+=(sources[j].length()-1);
                }
                else
                {
                    ans+=S[i];
                }
                i++;
                j++;
                continue;
            }
            ans+=S[i];
            i++;
        }
        return ans;
    }
