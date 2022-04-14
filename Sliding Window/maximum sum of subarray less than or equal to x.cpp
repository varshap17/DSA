
 // } Driver Code Ends
class Solution{


	public:
	int findMaxSubarraySum(long long arr[], int n, long long sum)
	{
	    int i=0;
	    int j=0;
	    int s=0;
	    int su=0;
	    while(i<n)
	    {
	        s+=arr[i];
	        if(s<=sum)
	        {
	            su=max(su,s);
	        }
	        else if(s>sum)
	        {
	            while(s>sum)
	            {
	                s-=arr[j];
	                j++;
	            }
	            if(s<=sum)
	            {
	                su=max(su,s);
	            }
	        }
	        i++;
	    }
	    return su;
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
        
        long long a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        
        long long sum;
        cin >> sum;
        

        Solution ob;
		cout << ob.findMaxSubarraySum(a, n, sum);
        
	    cout << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends
