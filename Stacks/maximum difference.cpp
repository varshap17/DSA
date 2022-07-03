int findMaxDiff(int A[], int n)
    {
        int left[n]={0};
        stack<int> sl;
        sl.push(0);
        for(int i=1;i<n;i++)
        {
            while(!sl.empty() && A[i]<=A[sl.top()])
            {
                sl.pop();
            }
            left[i]=sl.empty()?0:A[sl.top()];
            sl.push(i);
        }
        int right[n]={0};
        stack<int> sr;
        sr.push(n-1);
        for(int i=n-2;i>=0;i--)
        {
            while(!sr.empty() && A[sr.top()]>=A[i])
            {
                sr.pop();
            }
            right[i]=sr.empty()?0:A[sr.top()];
            sr.push(i);
        }
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,abs(right[i]-left[i]));
        }
        return maxi;
    }
