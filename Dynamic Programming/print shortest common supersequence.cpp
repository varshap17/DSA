class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) 
    {
        int n = str1.size();
        int m= str2.size();
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0)
                {
                    dp[i][j] = j;
                }
                else if(j==0)
                {
                    dp[i][j] = i;
                }
                else
                {
                    if(str1[i-1] == str2[j-1])
                    {
                        dp[i][j] = 1 + dp[i-1][j-1];
                    }
                    else
                    {
                        dp[i][j] = 1 + min(dp[i-1][j],dp[i][j-1]);
                    }
                }
            }
        }
        int r = n,c = m;
        string ans = "";
        while(r>0 && c>0)
        {
            if(str1[r-1] == str2[c-1])
            {
                ans += str1[r-1];
                r--;
                c--;
            }
            else
            {
                if(dp[r-1][c] < dp[r][c-1])
                {
                    ans += str1[r-1];
                    r--;
                }
                else
                {
                    ans += str2[c-1];
                    c--;
                }
            }
        }
        while(r>0)
        {
            ans += str1[r-1];
            r--;
        }
        while(c>0)
        {
            ans += str2[c-1];
            c--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
