#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	public:
	  
	void bitonicGenerator(int arr[], int n)
	{
	    int i=1;
	    int j=n-1;
	    if(n%2==0)
	    {
	        j=n-2;
	    }
	    while(i<j)
	    {
	        swap(arr[i],arr[j]);
	        i+=2;
	        j-=2;
	    }
	    sort(arr,arr+(n+1)/2);
	    sort(arr+(n+1)/2,arr+n,greater<int>());
	    
	}
	
};

// { Driver Code Starts.

int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];


        

        Solution ob;
        ob.bitonicGenerator(arr, n);
        
        for (int i = 0; i < n; i++) 
        	cout << arr[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends
