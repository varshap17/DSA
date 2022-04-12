class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        int n=s.length();
        if(n==0)
        {
            return 0;
        }  
        if(n==1)
        {
            return 1;
        }
        map<char,int> m;
        int maxi=INT_MIN;
        int i=0;
        int j=0;
        while(i<n)
        {
            m[s[i]]++;
            if(m[s[i]]>1)
            {
                while(m[s[i]]!=1)
                {
                    m[s[j]]--;
                    j++;
                }
            }
            else
            {
                maxi=max(maxi,i-j+1);
            }
            i++;
        }
        return maxi;
    }
};
