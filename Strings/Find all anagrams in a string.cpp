class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        int n = s.length();
        int m = p.length();
        
        if(n<m) 
        {
            return {};
        }
        
        vector<int> m1(26,0);
        vector<int> m2(26,0);
        
        for(int i=0;i<m;i++)
        {
            m1[p[i]-'a']++;
            m2[s[i]-'a']++;
        }
        
        vector<int> ans;
        if(m1==m2) 
        {
            ans.push_back(0);
        }
        int k=0;
        for(int i=m;i<n;i++)
        {
            m2[s[k] - 'a']--;
            m2[s[i] - 'a']++;
            if(m1==m2) 
            {
                ans.push_back(k+1);
            }
            k++;
        }
        return ans;
    }
};
