class Solution{

    public:
    int repeatedStringMatch(string A, string B) 
    {
        int n=A.length();
        int m=B.length();
        int c=1;
        string ans=A;
        while(A.find(B)==string::npos && A.size()<=B.size()+ans.size())
        {
            A.append(ans);
            c++;
        }
        if(A.find(B)==string::npos)
        {
            return -1;
        }
        else
        {
            return c;
        }
    }
  
};
