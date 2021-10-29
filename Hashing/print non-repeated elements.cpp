#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: input array
    // n: size of array
    //Function to return non-repeated elements in the array.
    vector<int> printNonRepeated(int arr[],int n)
    {
        vector <int> m;
        unordered_map <int,int> count;
        for(int i=0;i<n;i++)
        {
            count[arr[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(count[arr[i]]==1)
            {
                m.push_back(arr[i]);
            }
        }
        return m;
    }
};

// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    vector<int> v;
	    Solution obj;
	    v = obj.printNonRepeated(arr,n);
	    
	    for(int i=0;i<v.size();i++)  
	        cout<<v[i]<<" ";
	    
	    cout<<endl;
	    
	}
	return 0;
}

  // } Driver Code Ends
