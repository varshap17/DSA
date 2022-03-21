#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends



vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int n, long long int k) 
{
    vector<long long> ans;
    queue<pair<int,int>> q;
    for(int i=0;i<k-1;i++)
    {
        if(A[i]<0)
        {
            q.push({A[i],i});
        }
    }
    int i=0;
    int j=k-1;
    while(j<n)
    {
        if(A[j]<0)
        {
            q.push({A[j],j});
        }
        if(q.front().second<i && !q.empty())
        {
            q.pop();
        }
        if(q.empty())
        {
            ans.push_back(0);
            i++;
            j++;
            continue;
        }
        ans.push_back(q.front().first);
        i++;
        j++;
    }
    return ans;                                     
}
