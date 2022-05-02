class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        sort(arr,arr+n);
        vector<string> ans;
        map<string,int> m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        int maxi=0;
        for(auto x:m)
        {
            maxi=max(maxi,x.second);
        }
        map<string,int> m1;
        for(auto x:m)
        {
            if(x.second==maxi)
            {
                ans.push_back(x.first);
                break;
            }
        }
        ans.push_back(to_string(maxi));
        return ans;
    }
    
};
