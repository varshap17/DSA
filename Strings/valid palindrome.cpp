class Solution {
public:
    bool isPalindrome(string s) 
    {
        int j = 0;
        for(int i = 0; i < s.size(); ++i) 
        {
            s[j] = tolower(s[i]);
            
            if(isalnum(s[j])) 
            {
                j++;
            }
        }
        j--;
        for(int i = 0; i < j; ++i, --j) 
        {
            if(s[i] != s[j]) 
            {
                return false;
            }
        }
        return true;
    }
};
