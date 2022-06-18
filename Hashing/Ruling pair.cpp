int count(int num)
    {
        int sum=0;
        while(num>0)
        {
            sum+=(num%10);
            num/=10;
        }
        return sum;
    }
    int RulingPair(vector<int> arr, int n) 
    { 
        map<int,vector<int>> m;
        for(int i=0;i<n;i++)
        {
            int d=count(arr[i]);
            m[d].push_back(arr[i]);
        }
        int maxi=INT_MIN;
        for(auto x:m)
        {
            vector<int> a;
            a=x.second;
            if(a.size()>=2)
            {
                sort(a.begin(),a.end());
                int sum=0;
                sum=a[a.size()-2]+a[a.size()-1];
                maxi=max(maxi,sum);
            }
        }
        if(maxi==INT_MIN)
        {
            return -1;
        }
        return maxi;
    }
