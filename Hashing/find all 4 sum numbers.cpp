

 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) 
    {
        sort(arr.begin() , arr.end());
        int n = arr.size();
        vector<vector<int>> ans;
        map<vector<int> , int> mp;
        int i = 0,j=n-1;
        while(i < j)
        {
            j = i+1;
            while(j < n)
            {
                int left = j+1 , right = n-1;
                while(left < right)
                {
                    int sum = arr[i] + arr[j] + arr[left] + arr[right];
                    if(sum == k) 
                    {
                        vector<int> cur {arr[i] , arr[j] , arr[left] , arr[right]};
                        if(mp[cur] == 0) 
                        {
                            ans.push_back(cur);
                            mp[cur] = 1;
                        }
                        left++; 
                        right--;
                    }
                    else if(sum > k) 
                    right--;
                    else             
                    left++;
                }
                j++;
            }
            i++;
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends
