#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) 
	{
	    vector<int> arr1;
	    vector<int> arr2;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]<0)
	        {
	            arr1.push_back(arr[i]);
	        }
	        else
	        {
	            arr2.push_back(arr[i]);
	        }
	    }
	    int j=0;
	    int i=0;
	    while(i<arr1.size() && i<arr2.size())
	    {
	        arr[j++]=arr2[i];
	        arr[j++]=arr1[i];
	        i++;
	    }
	    while(i<arr2.size())
	    {
	        arr[j]=arr2[i];
	        j++;
	        i++;
	    }
	    while(i<arr1.size())
	    {
	        arr[j]=arr1[i];
	        j++;
	        i++;
	    }
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
