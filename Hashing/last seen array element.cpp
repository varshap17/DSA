int lastSeenElement(int arr[], int n)
    {
        map<int,vector<int>> m;
        int mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            m[arr[i]].push_back(i);
        }
        for(auto x:m)
        {
            mini=min(mini,x.second[x.second.size()-1]);
        }
        return arr[mini];
    }
