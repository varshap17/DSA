class Solution{
  public:
    int findIndex(string str) 
    {
        int open=0;
        int close=count(str.begin(),str.end(),')');
        for(int i=0;i<str.length();i++)
        {
            if(str[i]==')')
            {
                close--;
            }
            else
            {
                open++;
            }
            if(open==close)
            {
                return (i+1);
            }
        }
        return 0;
    }
};
