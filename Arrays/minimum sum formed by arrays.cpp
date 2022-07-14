long long int minSum(int arr[], int n)
    {
        sort(arr,arr+n);
        long long l=0;
        long long r=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                l=(l*10)+arr[i];
            }
            else
            {
                r=(r*10)+arr[i];
            }
        }
        return l+r;
    }
