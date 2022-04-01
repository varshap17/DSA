#include<bits/stdc++.h> 
using namespace std; 



 // } Driver Code Ends


class Solution{
  public:
    vector<int> maxProductSubsequence(int *a , int n) 
    { 
        vector<int> ans = {-1, -1, -1};
        long long int mp = 1;
        vector<int> x(n, 1);
        for(int i=n-2; i>=0; i--) 
        {
            x[i] = max(x[i+1], a[i+1]);
        }
        set<int> b;
        for(int i=0; i<n; i++)
        {
            vector<long long int> c; 
            c.push_back(a[i]);
            b.insert(a[i]);
            if((*b.begin())<a[i])
            {
                auto it = b.lower_bound(a[i]);
                it--;
                c.push_back(*it);
            }
            if(x[i]>a[i]) 
            {
                c.push_back(x[i]);
            }
            if(c.size()==3 && (c[0]*c[1]*c[2])>mp)
            {
                ans = {c[1], c[0], c[2]};
                mp = (c[0]*c[1]*c[2]);
            }
        }
        return ans;
    } 

};

// { Driver Code Starts.
// Driver Program 
int main() 
{ 
	int T;
	cin>>T;
	while(T--){
	    
	    int num;
	    cin>>num;
	    int arr[num];
	    for(int i = 0; i<num; ++i)
	        cin>>arr[i];
	    
	    vector<int> res;
	    Solution obj;
	    res = obj.maxProductSubsequence(arr, num);
	    
	    if(res[0] == -1)
	        cout<<"Not Present\n";
	    else{
    	    for(int i = 0; i<3; ++i)
    	        cout<<res[i]<<" ";
    	    cout<<"\n";
	    }
	    
	}
} 
  // } Driver Code Ends
