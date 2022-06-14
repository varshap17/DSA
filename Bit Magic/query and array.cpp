int findX(int arr[], int n, int q) 
    {
        int mini=INT_MAX;
        int minnum=0;
        for(int i=0;i<n;i++)
        {
            int a=q^arr[i];
            int count=0;
            while(a>0)
            {
                if(a&1)
                {
                    count++;
                }
                a=a>>1;
            }
            if(count<mini)
            {
                mini=count;
                minnum=arr[i];
            }
            else if(count==mini)
            {
                minnum=min(minnum,arr[i]);
            }
        }
        return minnum;
    }
