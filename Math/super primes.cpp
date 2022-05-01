class Solution{
public:	
	int superPrimes(int n)
	{
	    vector<bool> v(n+1,true);
	    v[0]=v[1]=false;
	    for(int i=2;i<=n;i++)
	    {
	        if(v[i]==true)
	        {
	            for(int j=2*i;j<=n;j+=i)
	            {
	                v[j]=false;
	            }
	        }
	    }
	    int c=0;
	    for(int i=2;i<=n;i++)
	    {
	        if(v[i] && v[i-2])
	        {
	            c++;
	        }
	    }
	    return c;
	}
};
