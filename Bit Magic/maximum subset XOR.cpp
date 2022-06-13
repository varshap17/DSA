int maxSubarrayXOR(int arr[], int N)
    {
        if(N==0)
        {
            return 0;
        }
        int x=0;
        while(1)
        {
            int y=*max_element(arr,arr+N);
            if(y==0)
            {
                return x;
            }
            x=max(x,x^y);
            for(int i=0;i<N;i++)
            {
                arr[i]=min(arr[i],arr[i]^y);
            }
        }
    }
