int minOperations(int arr[], int n, int k) 
    {
        priority_queue <int, vector<int>, greater<int> > q;
        for(int i=0;i<n;i++)
        {
            q.push(arr[i]);
        }
        int f=0;
        int c=0;
        while(!q.empty())
        {
            if(q.top()>=k)
            {
                f=1;
                break;
            }
            auto p=q.top();
            q.pop();
            if(q.empty())
            {
                return -1;
            }
            p+=q.top();
            q.pop();
            q.push(p);
            c++;
        }
        if(f)
        {
            return c;
        }
        return -1;
    }
