
 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) 
	{
	    int ma=0;
	    int max_i=0;
	    for(int i=0;i<n;i++)
	    {
	        int sum=0;
	        for(int j=0;j<m;j++)
	        {
	            sum+=arr[i][j];
	        }
	        if(sum>ma)
	        {
	            ma=sum;
	            max_i=i;
	        }
	    }
	    if(ma==0)
	    {
	        return -1;
	    }
	    return max_i;
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
