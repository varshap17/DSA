class Solution {
public:
    int t[38]={0};
    int tribonacci(int n) 
    {
        if(n==0)
        {
            t[n]=0;
            return 0;
        }
        if(n==1 ||n==2)
        {
            t[n]=1;
            return 1;
        }
        else if(t[n]!=0)
        {
            return t[n];
        }
        t[n]=tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
        return t[n];
    }
};
