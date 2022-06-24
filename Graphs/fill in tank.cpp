bool isPossible(list<int> *adj, int parent, int startNode, long long water, int* cap)
    {
        if(cap[startNode-1]>water)
        {
            return false;
        }
        long long waterRemaining=water-cap[startNode-1];
        long long branches=adj[startNode].size();
        if(parent!=-1)
        {
            branches--;
        }
        for(auto nei: adj[startNode])
        {
            if(nei==parent)
            {
                continue;
            }
            if(isPossible(adj,startNode,nei,waterRemaining/branches,cap)==false)
            {
                return false;
            }
        }
        return true;
    }
    
    long long minimum_amount(vector<vector<int>> &E, int num, int start, int *cap)
    {
        list<int> adj[num+1];
        for(int i=0;i<E.size()-1;i++)
        {
            adj[E[i][0]].push_back(E[i][1]);
            adj[E[i][1]].push_back(E[i][0]);
        }
        long long res=0;
        long long low=0;
        for(int i=0;i<num;i++)
        {
            low+=cap[i];
        }
        long long high=1e18;
        while(low<=high)
        {
            long long mid=(low+high)/2;
            if(isPossible(adj,-1,start,mid,cap)==true)
            {
                res=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return res==0 ? -1 : res;
    }
