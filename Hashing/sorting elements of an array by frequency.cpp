#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    static bool sortby(pair<int,int> a, pair<int,int> b)
    {
        if(a.second!=b.second)
        {
            return (a.second>b.second);
        }
        else
        {
            return (a.first<b.first);
        }
    }
    vector<int> sortByFreq(int arr[],int n)
    {
        vector<int> m;
        vector <pair<int,int>> A;
        map<int,int> count;
        for(int i=0;i<n;i++)
        {
            count[arr[i]]++;
        }
        for(auto x:count)
        {
            A.push_back(make_pair(x.first,x.second));
        }
        sort(A.begin(),A.end(),sortby);
        for(int i=0;i<A.size();i++)
        {
            int x=A[i].second;
            while(x--)
            {
                m.push_back(A[i].first);
            }
        }
        return m;
    }
};

// { Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}

  // } Driver Code Ends
