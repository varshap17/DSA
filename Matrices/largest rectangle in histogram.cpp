class Solution {
public:
    int largestRectangleArea(vector<int>& heights) 
    {
        stack<int> s;
        int n=heights.size();
        int mmax=0;
        int m=0;
        int i=0;
        while(i<n)
        {
            if(s.empty() || heights[s.top()]<=heights[i])
            {
                s.push(i++);
            }
            else
            {
                int y=s.top();
                s.pop();
                if(s.empty())
                {
                    m=heights[y]*i;
                }
                else
                {
                    m=heights[y]*(i-s.top()-1);
                }
            }
            mmax=max(m,mmax);
        }
        while(!s.empty())
        {
            int y=s.top();
            s.pop();
            if(s.empty())
            {
                m=heights[y]*i;
            }
            else
            {
                m=heights[y]*(i-s.top()-1);
            }
            mmax=max(mmax,m);
        }
        return mmax;
    }
};
