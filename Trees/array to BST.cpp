#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    void array(vector<int>nums,int l,int r,vector<int> &ans)
    {
        if(l>r)
        {
            return ;
        }
        int mid=(l+r)/2;
        ans.push_back(nums[mid]);
        array(nums,l,mid-1,ans);
        array(nums,mid+1,r,ans);
    }
    vector<int> sortedArrayToBST(vector<int>& nums) 
    {
        vector<int> ans;
        int n=nums.size();
        array(nums,0,n-1,ans);
        return ans;
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
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends
