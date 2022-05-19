int transform (string A, string B)
    {
        if(A.length()!=B.length())
        {
            return -1;
        }
        int i=A.length()-1;
        int j=B.length()-1;
        vector<int> v(256);
        while(i>=0 && j>=0)
        {
            if(A[i]==B[j])
            {
                i--;
                j--;
            }
            else
            {
                while(i>=0 && A[i]!=B[j])
                {
                    v[A[i]]++;
                    i--;
                }
                if(i>=0)
                {
                    i--;
                    j--;
                }
            }
        }
        int ans=0;
        while(j>=0)
        {
            ans++;
            v[B[j]]--;
            if(v[B[j]]<0)
            {
                return -1;
            }
            j--;
        }
        return ans;
    }
