class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) 
	{
	    long long maxpro=INT_MIN;
	    long long pro=1;
	    for(int i=0;i<n;i++)
	    {
	        pro*=arr[i];
	        maxpro=max(maxpro,pro);
	        if(pro==0)
	        {
	            pro=1;
	        }
	    }
	    pro=1;
	    for(int i=n-1;i>=0;i--)
	    {
	        pro*=arr[i];
	        maxpro=max(maxpro,pro);
	        if(pro==0)
	        {
	            pro=1;
	        }
	    }
	    return maxpro;
	}
};
