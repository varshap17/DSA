class Solution{
public:	
	int maxSubstring(string s)
	{
	    int n=s.length();
	    int max_now=0;
	    int max_so_far=0;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='0')
	        {
	            max_now+=1;
	        }
	        else
	        {
	            max_now-=1;
	        }
	        if(max_now>max_so_far)
	        {
	            max_so_far=max_now;
	        }
	        if(max_now<0)
	        {
	            max_now=0;
	        }
	    }
	    if(max_so_far==0)
	    {
	        return -1;
	    }
	    return max_so_far;
	}
};
