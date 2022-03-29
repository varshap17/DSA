unordered_map<string,bool> m;
class Solution {
public:
    bool check(string a,string b)
    {
        if(a.compare(b)==0)
        {
            return true;
        }
        if(a.length()<=1)
        {
            return false;
        }
        string key=a;
        key.push_back(' ');
        key.append(b);
        if(m.find(key)!=m.end())
        {
            return m[key];
        }
        int n=a.length();
        bool flag=false;
        for(int i=1;i<n;i++)
        {
            if((check(a.substr(0,i),b.substr(n-i,i)) && check(a.substr(i,n-i),b.substr(0,n-i)) == true)
               || (check(a.substr(0,i),b.substr(0,i)) && check(a.substr(i,n-i),b.substr(i,n-i))==true))
            {
                flag=true;
                return flag;
            }
        }
        return m[key]=flag;
    }
    bool isScramble(string s1, string s2) 
    {
        if(s1.length()!=s2.length())
        {
            return false;
        }
        if(s1.length()==0 && s2.length()==0)
        {
            return true;
        }
        return check(s1,s2);
    }
};
