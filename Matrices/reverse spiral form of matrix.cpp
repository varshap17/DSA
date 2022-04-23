vector<int> reverseSpiral(int R, int C, vector<vector<int>>&a)  
    {
        vector<int> v;
        int l=0,h=0;
        int n=R,m=C;
        while(l<n && h<m)
        {
            for(int i=h;i<m;i++)
            {
                v.push_back(a[l][i]);
            }
            l++;
            for(int i=l;i<n;i++)
            {
                v.push_back(a[i][m-1]);
            }
            m--;
            if(l<n)
            {
                for(int i=m-1;i>=h;--i)
                {
                    v.push_back(a[n-1][i]);
                }
                n--;
            }
            if(h<m)
            {
                for(int i=n-1;i>=l;--i)
                {
                    v.push_back(a[i][h]);
                }
                h++;
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
