class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        int n=ransomNote.length();
        int m=magazine.length();
        map<char,int> m1;
        map<char,int> m2;
        for(int i=0;i<n;i++)
        {
            m1[ransomNote[i]]++;
        }
        for(int j=0;j<m;j++)
        {
            m2[magazine[j]]++;
        }
        for(auto x:m1)
        {
            if(m2[x.first]<x.second)
            {
                return false;
            }
        }
        return true;
    }
};
