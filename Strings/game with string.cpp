class Solution{
public:
    int minValue(string s, int k)
    {
        int n=s.length();
        map<char,int> m;
        int count=0;
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto x:m)
        {
            pq.push({x.second,x.first});
        }
        for(int i=0;i<k;i++)
        {
            pair<int,char> p=pq.top();
            pq.pop();
            if(--p.first!=0)
            {
                pq.push(p);
            }
        }
        while(!pq.empty())
        {
            pair<int,char> pp=pq.top();
            pq.pop();
            count+=(pp.first*pp.first);
        }
        return count;
    }
};
