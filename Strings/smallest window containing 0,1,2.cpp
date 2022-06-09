int smallestSubstring(string S) 
    {
        int n=S.length();
        int j=0;
        int ans=INT_MAX;
        vector<int>count(3);
        for(int i=0;i<n;i++)
        {
            count[S[i]-'0']++;
            while(count[0] && count[1] && count[2])
            {
                ans=min(ans,i-j+1);
                count[S[j++]-'0']--;
            }
        }
        return ans==INT_MAX?-1:ans;
    }
