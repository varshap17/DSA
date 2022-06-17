long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                arr[i]=-1;
            }
        }
        map<int,int> m;
        int sum=0;
        int c=0;
        m[0]++;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(m.find(sum)!=m.end())
            {
                c+=m[sum];
            }
            m[sum]++;
        }
        return c;
    }
