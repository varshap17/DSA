class Solution {
public:
    static bool cmp(vector<int> a,vector<int> b)
    {
        return a[1]<b[1];
    }
    
    int scheduleCourse(vector<vector<int>>& courses) 
    {
        sort(courses.begin(), courses.end(), cmp);
		priority_queue<int> pq;
        int curr_time=0;
        for(int i=0;i<courses.size();i++) 
        {
            if(courses[i][0]+curr_time<=courses[i][1]) 
            {
                pq.push(courses[i][0]);
                curr_time+=courses[i][0];
            } 
            else if(!pq.empty() && pq.top()>courses[i][0]) 
            {
                curr_time-=pq.top()-courses[i][0];
                pq.pop();
                pq.push(courses[i][0]);
            }
        }
        return pq.size();
    }
};
