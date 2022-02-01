#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int a=0;
        vector<int> ans;
        for(int i=0;i<n;i+=2)
        {
            a=nums[i]^nums[i+1];
            if(a!=0)
            {
                ans.push_back(nums[i]);
                a=0;
                i--;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends
