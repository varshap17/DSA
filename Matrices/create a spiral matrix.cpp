class Solution {
public:
    vector<vector<int>> generateMatrix(int n) 
    {
        int r=n;
        int c=n;
        int l=0;
        int h=0;
        int p=1;
        vector<vector<int>> a(n, vector<int> (n));
        while(l<r && h<c)
        {
            for(int i=h;i<c;i++)
            {
                a[l][i]=p++;
            }
            l++;
            for(int i=l;i<r;i++)
            {
                a[i][c-1]=p++;
            }
            c--;
            if(l<r)
            {
                for(int i=c-1;i>=h;i--)
                {
                    a[r-1][i]=p++;
                }
                r--;
            }
            if(h<c)
            {
                for(int i=r-1;i>=l;i--)
                {
                    a[i][h]=p++;
                }
                h++;
            }
        }
        return a;
    }
};
