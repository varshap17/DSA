class Solution{   
public:
    string stringPartition(string s, int a, int b)
    {
        string s1,s2;
        for(int i=0;i<s.length()-1;i++)
        {
            s1+=s[i];
            s2=s.substr(i+1);
            if(stoi(s1)%a==0 && stoi(s2)%b==0)
            {
                return s1+" "+s2;
            }
        }
        return "-1";
    }
};
