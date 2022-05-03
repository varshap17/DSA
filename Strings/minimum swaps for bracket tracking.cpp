class Solution{   
public:
    int minimumNumberOfSwaps(string s)
    {
        int n=s.length();
        int countleft=0;
        int countright=0;
        int swap=0;
        int imbalance=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='[')
            {
                countleft++;
                if(imbalance>0)
                {
                    swap+=imbalance;
                    imbalance-=1;
                }
            }
            else if(s[i]==']')
            {
                countright+=1;
                imbalance=(countright-countleft);
            }
        }
        return swap;
    }
};
