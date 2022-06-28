int canReach(int A[], int N) 
    {
        int goal=N-1;
        for(int i=N-1;i>=0;i--)
        {
            if(i+A[i]>=goal)
            {
                goal=i;
            }
        }
        if(goal==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
