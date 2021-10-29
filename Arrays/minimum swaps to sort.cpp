#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    int count=0;
	    int n=nums.size();
	    pair<int,int> ans[n];
	    for(int i=0;i<n;i++)
	    {
	        ans[i]={nums[i],i};
	    }
	    sort(ans,ans+n);
	    vector<bool> visit(n,false);
	    for(int i=0;i<n;i++)
	    {
	        if(visit[i] || ans[i].second==i)
	        {
	            continue;
	        }
	        int cycle_size=0;
	        int j=i;
	        while(!visit[j])
	        {
	            visit[j]=1;
	            j=ans[j].second;
	            cycle_size++;
	        }
	        if(cycle_size>0)
	        {
	            count+=(cycle_size-1);
	        }
	    }
	    return count;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends
