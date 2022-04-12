class Solution {
public:
    int totalFruit(vector<int>& fruits) 
    {
        int c=0;
        int n=fruits.size();
        if(n<=2)
        {
            return n;
        }
        int i=0;
        int j=0;
        map<int,int> m;
        while(j<n)
        {
            m[fruits[j]]++;
            if(m.size()<2)
            {
                j++;
            }
            else if(m.size()==2)
            {
                c=max(c,j-i+1);
                j++;
            }
            else 
            {
                m[fruits[i]]--;
                if(m[fruits[i]]==0)
                {
                    m.erase(fruits[i]);
                }
                i++;
                j++;
            }
        }
        if(m.size()==1)
        {
            return n;
        }
        return c;
    }
};
