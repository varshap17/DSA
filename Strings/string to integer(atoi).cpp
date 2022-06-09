class Solution {
public:
    int myAtoi(string s) 
    {
        bool word=false,pos=true;
        long int ans=0;
        int i=0;
        while(i<s.size())
        {
            if(s[i]>='0'&&s[i]<='9')
            {
                break;
            }
            else if(s[i]==' ')
            { 
                i++;
                continue;
            }
            else if(s[i]=='+' || s[i]=='-')
            {  
                pos=s[i]=='+'?true:false;
                i++;
                break;
            }
            else
            {
                return 0;
            }
            i++;
        }
        for(i;i<s.length();i++)
        {
            if(word)
            {
                return pos?ans:-ans;
            }
            else if(s[i]>='0' && s[i]<='9')
            {
                ans=ans*10+(s[i]-'0');
                if(ans>INT_MAX)
                {
                    return pos?INT_MAX:INT_MIN;
                }
            }
            else
            {
                word=true;
            }
        }
        return pos?ans:-ans;
    }
};
