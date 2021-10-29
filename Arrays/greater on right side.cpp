
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* Function to replace every element with the
	next greatest element */
	void nextGreatest(int arr[], int n) 
	{
	    int c=arr[n-1];
	    arr[n-1]=-1;
	    for(int i=n-2;i>=0;i--)
	    {
	        if(arr[i]>c)
	        {
	            int temp=c;
	            c=arr[i];
	            arr[i]=temp;
	        }
	        else
	        {
	            arr[i]=c;
	        }
	        
	    }
	}


};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.nextGreatest(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
