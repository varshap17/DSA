int maxAND (int arr[], int n)
	{
	    int ans=0;
	    for(int i=31;i>=0;i--)
	    {
	        int count=0;
	        int cur=ans|(1<<i);
	        for(int j=0;j<n;j++)
	        {
	            if((arr[j]&cur)==cur)
	            {
	                count++;
	            }
	        }
	        if(count>=2)
	        {
	            ans=cur;
	        }
	    }
	    return ans;
	}
