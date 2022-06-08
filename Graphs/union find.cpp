int find(int a ,int par[])
    {
        if(a==par[a])
        {
            return a;
        }
        return par[a]=find(par[a],par);
    }
    void union_( int a, int b, int par[], int rank1[]) 
    {
        a=find(a,par), b=find(b,par);
        if(rank1[a]>=rank1[b])
        {
            par[b]=a;
            rank1[a]++;
        }
        else
        {
            par[a]=b;
            rank1[b]++;
        }
    }
    
    //Function to check whether 2 nodes are connected or not.
    bool isConnected(int x,int y, int par[], int rank1[])
    {
        return find(x,par)==find(y,par);
    }
