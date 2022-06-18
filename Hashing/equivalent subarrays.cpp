int countDistinctSubarray(int arr[], int n)
    {
        unordered_map<int,int> m;
        int i=0;
        int j=0;
        int ans=0;
        unordered_set<int> s;
        for(int i=0;i<n;i++)
        {
            s.insert(arr[i]);
        }
        int k=s.size();
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
            while(m.size()>=k && j<=i)
            {
                ans+=(n-i);
                m[arr[j]]--;
                if(m[arr[j]]==0)
                {
                    m.erase(arr[j]);
                }
                j++;
            }
        }
        return ans;
    }
