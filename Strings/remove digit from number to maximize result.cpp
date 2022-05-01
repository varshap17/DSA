class Solution {
public:
    string removeDigit(string number, char digit) 
    {
        string ans="";
        string mans="";
        string x=number;
        int n=number.length();
        for(int i=0;i<n;i++)
        {
            if(number[i]==digit)
            {
                ans=number.erase(i,1);
            }
            if(ans>mans)
            {
                mans=ans;
            }
            number=x;
        }
        return mans;
    }
};
